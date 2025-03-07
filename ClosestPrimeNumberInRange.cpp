class Solution
{
public:
    vector<bool> sieve(int n)
    {
        vector<bool> is_prime(n + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (int i = 2; i * i <= n; i++)
        {
            if (is_prime[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    is_prime[j] = false;
                }
            }
        }

        return is_prime;
    }

    pair<int, int> min_pair(int L, int R)
    {
        vector<bool> is_prime = sieve(R);
        vector<int> primes;

        for (int i = max(L, 2); i <= R; i++)
        {
            if (is_prime[i])
                primes.push_back(i);
        }

        if (primes.size() < 2)
            return {-1, -1};

        pair<int, int> ans = {-1, -1};
        int min_diff = INT_MAX;

        for (size_t i = 0; i < primes.size() - 1; i++)
        {
            int diff = primes[i + 1] - primes[i];

            if (diff < min_diff)
            {
                min_diff = diff;
                ans = {primes[i], primes[i + 1]};
            }
        }

        return ans;
    }

    vector<int> closestPrimes(int left, int right)
    {
        pair<int, int> temp = min_pair(left, right);
        vector<int> ans;
        ans.push_back(temp.first);
        ans.push_back(temp.second);

        return ans;
    }
};
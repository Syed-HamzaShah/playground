class OrderedStream
{
    vector<string> v;
    int ptr = 0;

public:
    OrderedStream(int n)
    {
        v.resize(n);
    }

    vector<string> insert(int idKey, string value)
    {
        v[idKey - 1] = value;

        vector<string> result;

        while (ptr < v.size() && !v[ptr].empty())
        {
            result.push_back(v[ptr]);
            ptr++;
        }

        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
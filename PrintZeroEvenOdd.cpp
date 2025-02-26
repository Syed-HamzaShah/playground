class ZeroEvenOdd
{
private:
    int n;
    binary_semaphore s1{1};
    binary_semaphore s2{0};
    binary_semaphore s3{0};

public:
    ZeroEvenOdd(int n)
    {
        this->n = n;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber)
    {
        for (int i = 1; i <= n; i++)
        {
            s1.acquire();
            printNumber(0);

            if (i % 2 == 1)
                s3.release();
            else
                s2.release();
        }
    }

    void even(function<void(int)> printNumber)
    {
        for (int i = 2; i <= n; i += 2)
        {
            s2.acquire();
            printNumber(i);
            s1.release();
        }
    }

    void odd(function<void(int)> printNumber)
    {
        for (int i = 1; i <= n; i += 2)
        {
            s3.acquire();
            printNumber(i);
            s1.release();
        }
    }
};
class FooBar
{
private:
    int n;
    binary_semaphore foo_sem{1};
    binary_semaphore bar_sem{0};

public:
    FooBar(int n)
    {
        this->n = n;
    }

    void foo(function<void()> printFoo)
    {

        for (int i = 0; i < n; i++)
        {
            foo_sem.acquire();

            // printFoo() outputs "foo". Do not change or remove this line.
            printFoo();
            bar_sem.release();
        }
    }

    void bar(function<void()> printBar)
    {

        for (int i = 0; i < n; i++)
        {
            bar_sem.acquire();
            // printBar() outputs "bar". Do not change or remove this line.
            printBar();
            foo_sem.release();
        }
    }
};
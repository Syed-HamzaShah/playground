class Foo
{
public:
    mutex mx1, mx2;
    Foo()
    {
        mx1.lock();
        mx2.lock();
    }

    void first(function<void()> printFirst)
    {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mx1.unlock();
    }

    void second(function<void()> printSecond)
    {
        mx1.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        mx2.unlock();
    }

    void third(function<void()> printThird)
    {
        mx2.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
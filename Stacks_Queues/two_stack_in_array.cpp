#include <iostream>
using namespace std;

struct twostacks
{
    int *arr;
    int top1;
    int top2;
    int cap;

    twostacks(int n)
    {
        cap = n;
        arr = new int[cap];
        top1 = -1;
        top2 = cap;
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top2 - 1 > top1)
        {
            top2--;
            arr[top2] = x;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else
        {
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < cap)
        {
            int res = arr[top2];
            top2++;
            return res;
        }
        else
        {
            exit(1);
        }
    }

    int size1()
    {
        return top1 + 1;
    }

    int size2()
    {
        return (cap - top2);
    }
};

int main(void)
{
    twostacks s(5);
    s.push1(5);
    s.push1(10);
    s.push2(20);
    s.push2(30);
    s.push2(40);
    cout << s.pop1() << endl;
    cout << s.size1() << endl;
    cout << s.size2() << endl;
    return 0;
}

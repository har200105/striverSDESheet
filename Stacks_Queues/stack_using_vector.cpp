#include <iostream>
#include <vector>
using namespace std;

struct mystack
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }

    int size()
    {
        return v.size();
    }

    int peek()
    {
        return v.back();
    }

    bool isempty()
    {
        return v.empty();
    }
};

int main(void)
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;
    return 0;
}

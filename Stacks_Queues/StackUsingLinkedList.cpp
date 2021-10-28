#include <iostream>
using namespace std;

struct node
{

    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct mystack
{
    node *head;
    int size;

    mystack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }

        int res = head->data;
        node *temp = head;
        head = head->next;
        size--;
        return res;
    }

    int sizeo()
    {
        return size;
    }

    int peek()
    {
        if (head == NULL)
        {
            return INT_MAX;
        }
        return head->data;
    }

    bool isempty()
    {
        return (head == NULL);
    }
};

int main(void)
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << s.pop() << endl;
    cout << s.sizeo() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;
    return 0;
}



// * 入栈   --- push
// * 出栈   --- pop
// * 返回栈顶   --- top
// * 判断栈是否为空   --- empty
// * 返回栈大小   --- size


// push(x) -- 将一个元素放入队列的尾部。
// pop() -- 从队列首部移除元素。
// peek() -- 返回队列首部的元素。
// empty() -- 返回队列是否为空。

#include<stack>
#include<iostream>
using namespace std;
class Solution
{
public:
    stack<int> stIN;
    stack<int> stOUT;

    void push(int x)
    {
        stIN.push(x);
    }
    int pop()
    {
        if(stOUT.empty())
        {
            while(!stIN.empty())
            {
                stOUT.push(stIN.top());
                stIN.pop();
            }
        }
        int result=stOUT.top();
        stOUT.pop();
        return result;
    }

    int peek()
    {
        int res=this->pop();
        stOUT.push(res);
        return res;
    }

    bool empty()
    {
        return stIN.empty() && stOUT.empty();
    }

};

void test()
{
    Solution s;
    s.push(1);
    s.push(100);
    s.push(3);
    s.push(4);
    
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.empty()<<endl;
}

int main()
{
    test();
    return 0;
}
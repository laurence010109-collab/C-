#include<iostream>
#include<queue>
using namespace std;

// push(x) -- 元素 x 入栈
// pop() -- 移除栈顶元素
// top() -- 获取栈顶元素
// empty() -- 返回栈是否为空

class Solution
{
public:
    queue<int> q1;
    queue<int> q2;
    void push(int x)
    {
        q1.push(x);
    }
    int pop()
    {
        int size_num=q1.size();
        size_num--;
        while(size_num--)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int result=q1.front();
        q1.pop();
        q1=q2;
        return result;
    }

    int top()
    {
        int size_num=q1.size();
        size_num--;
        while(size_num--)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int result=q1.front();
        q2.push(q1.front());
        q1.pop();
        q1=q2;
        return result;
    }
    bool empty()
    {
        return q1.empty();
    }
        
    
};


class Solution2
{ 
public:
    queue<int> q;
    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        int size_num=q.size();
        size_num--;
        while(size_num--)
        {
            q.push(q.front());
            q.pop();
        }
        int result=q.front();
        q.pop();
        return result;
    }

    int top()
    {
        int size_num=q.size();
        size_num--;
        while(size_num--)
        {
            q.push(q.front());
            q.pop();
        }
        int result=q.front();
        q.push(q.front());
        q.pop();
        return result;
    }

    bool empty()
    {
        return q.empty();
    }

};





void test()
{   

    Solution2 s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    s.push(3);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
}

int main()
{   
    test();
    return 0;

}
#include<iostream>
using namespace std;
#include<stack>
#include<vector>

class Solution
{
private:
    class MYQUEUE
    {
    public:
        deque<int> deque1;
        //pop即移除value
        //如果value是等于当前窗口的最大值，移除front（最大值）
        //如果value不是当前窗口的最大值，那么就不需要弹出，无操作
        void pop(int value)
        {
            if(!deque1.empty()&&deque1.front()==value)
            {
                deque1.pop_front();
            }
        }
        //push即添加value
        //如果value比当前窗口的最后一位大，那么就把这一位弹出，
        //直到value比当前窗口的最大值小或者窗口没有元素了
        //如果小则直接添加到窗口的最后
        void push(int value)
        {
            while(!deque1.empty()&&value>deque1.back())
            {
                deque1.pop_back();
            }
            deque1.push_back(value);
        }
        int front()
        {
            return deque1.front();
        }
    };

public:
    vector<int> maxSlidingwindow(vector<int>&nums,int k)
    {
        MYQUEUE myqueue;
        vector<int> res;
        //先把前k个元素放入窗口中
        for(int i=0;i<k;i++)
        {
            myqueue.push(nums[i]);
        }
        //把第一个窗口的最大值放入res
        res.push_back(myqueue.front());
        //从第k个元素开始，依次把后面的元素放入窗口中
        for(int i=k;i<nums.size();i++)
        {   
            //第一个元素
            myqueue.pop(nums[i-k]);
            myqueue.push(nums[i]);
            res.push_back(myqueue.front());
        }
        return res;
    }

};

void test()
{

}

int main()
{


}


class Solution
{
private:
    deque<int> deque1;

    void push(int value)
    {
        while(!deque1.empty()&&value>deque1.back())
        {
            deque1.pop_back();
        }
        deque1.push_back(value);
    }

     void pop(int value)
    {
        if(!deque1.empty()&&value==deque1.front())
        {
            deque1.pop_front();
        }
    }

    int front()
    {
        return deque1.front();
    }

public:
    vector<int> maxSlidingwindow(vector<int>&nums,int k)
    {   
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            deque1.push(nums[i]);
        }
        res.push_back(front());
    }
};
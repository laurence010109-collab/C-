#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
    vector<int> removeElement(vector<int> &nums,int val)
    {
        int fast=0,slow=0;
        while(fast<nums.size())
        {
            if(nums[fast]!=val)
            {
                nums[slow++]=nums[fast++];
            }
            else
            {
                fast++;
            }
        }
        return nums;
    }
};


void test()
{
    vector<int> nums={1,2,2,5,6,2,2,2,7,8,9,10};
    int val=2;
    Solution s;
    vector<int> result=s.removeElement(nums,val);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    test();
    return 0;
}
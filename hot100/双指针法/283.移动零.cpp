#include<iostream>
using namespace std;
#include<vector>

// 1. sizeof(nums) 使用错误
// 问题：在 C++ 中，nums 是一个 std::vector<int> 对象。sizeof(nums) 返回的是 vector 这个对象本身在内存中占用的字节数（通常在 64 位系统上是 24 字节，包含三个内部指针），而不是数组里的元素个数。

// 修正：获取 vector 的元素个数必须使用 nums.size()。所以初始化应该是 int right = nums.size() - 1;。

class Solution{
public:
    void moveZeroes(vector<int>& nums)
    {
        int slow=0;
        for(int fast=0;fast<nums.size();fast++)
        {
            if(nums[fast]!=0)
            {
                swap(nums[slow],nums[fast]);
                slow++;
            }
        }
    }

};


int main()
{
    vector<int> nums={0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
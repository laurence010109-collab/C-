#include<iostream>
#include<vector>
using namespace std;
#include<climits>
class Solution
{
public:
    int minSubArrayLen(int s, vector<int>& nums)
    {
        int left=0;
        
        int sum=0;
        int minlen=INT32_MAX;
        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];
            while(sum>=s)
            {
                minlen=min(minlen,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return minlen==INT32_MAX?0:minlen;
    }

};

int main()
{

    vector<int> nums={1};
    int s=2;
    Solution s1;
    cout<<s1.minSubArrayLen(s,nums)<<endl;
    return 0;

}
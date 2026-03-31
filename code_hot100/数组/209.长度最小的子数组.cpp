#include <iostream>
using namespace std;
#include <string>
#include <vector>


// class Solution {
// public:
//     int minsubarrylen(int s,vector<int>& nums)
//     {
//         int result=INT32_MAX;
//         int num=0;
//         int numlen=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             num=0;
//             for(int j=i;j<nums.size();j++)
//             {
//                 num=num+nums[j];
//                 if(num>=s)
//                 {
//                    numlen=j-i+1;
//                     result=min(result,numlen);
//                     break;
//                 }
                
//             }
//         }
//         return result ==INT32_MAX ? 0:result;
//     }
// };

class Solution
{
public:
    int minsubarrylen(int s,vector<int>& nums)
    {
        int result=INT32_MAX;
        int num=0;
        int numlen=0;
        int left=0;
        
    
        for(int right=0;right<nums.size();right++)
        {
            num=num+nums[right];
            while(num>=s)
            {
                numlen=right-left+1;
                result=min(result,numlen);
                num=num-nums[left];
                left++;
            }
        }
        return result ==INT32_MAX ? 0:result;
    }

};


int main()
{
    vector<int> nums={2,3,1,2,1,3};
    Solution s1;
    // s1.minsubarrylen(7,nums);
    cout<<s1.minsubarrylen(7,nums)<<endl;
    return 0;
}
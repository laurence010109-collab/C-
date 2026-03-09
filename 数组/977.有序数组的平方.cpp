#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include <algorithm>
// class Solution 
// {
// public:    
//     vector<int> removeDuplicates(vector<int>& nums)
//     {
//         for(int i=0;i<nums.size();i++)
//         {
//             nums[i] *=nums[i];
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
//     }

// };
   
class Solution
{
public:
    

};


int main()
{
    vector<int> nums={-4,-1,0,3,10};
    Solution s;
    vector<int> res=s.removeDuplicates(nums);
    for_each(res.begin(),res.end(),[](int num){
        cout<<num<<" ";
    });
    return 0;

}
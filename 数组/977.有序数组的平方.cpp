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

    vector<int> sortSquares(vector<int> &v)
    {
        vector<int>result(v.size(),0);
        int k=v.size()-1;
        for(int i=0,j=v.size()-1;i<=j;)
        {
            if(v[i]*v[i]<v[j]*v[j])
            {
                result[k]=v[j]*v[j];
                k--;
                j--;
            }
            else
            {
                result[k]=v[i]*v[i];
                i++;
                k--;
            }
        }
        return result;
    }


};


int main()
{
    vector<int> nums={-4,-1,0,4};
    Solution s;
    // vector<int> res=s.removeDuplicates(nums);
    vector<int> res =s.sortSquares(nums);
    for_each(res.begin(),res.end(),[](int num){
        cout<<num<<" ";
    });
    return 0;

}
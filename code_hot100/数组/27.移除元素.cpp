#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include <algorithm>

//暴力法
// class Solution {
// public:
//     int removeElement(vector<int>& nums,int val)
//     {
//         int size=nums.size();
//         for(int i=0;i<size;i++)
//         {
//             if(nums[i]==val)
//             {
//                 for(int j=i+1;j<size;j++)
//                 {
//                     nums[j-1]=nums[j];
//                 }
//                 i--;
//                 size--;
                
//             }
//         }
//         return size;
//     }

// };

class Solution 
{
public:
    int removeElement(vector<int>& nums,int val)
    {
        int slowindex=0;
        for(int fastidex=0;fastidex<nums.size();fastidex++)
        { 
            if(nums[fastidex]!=val)
            {
                nums[slowindex]=nums[fastidex];
                slowindex++;
            }
        }
        return slowindex;
    }
};
int main()
{
   vector<int> nums={0,1,2,2,3,0,4,2};
   int val=2;
    Solution s;
    int res=s.removeElement(nums,val);
    cout<<res<<endl;
    for_each(nums.begin(),nums.end(),[](int num){
        cout<<num<<" ";
    });
    return 0;
}
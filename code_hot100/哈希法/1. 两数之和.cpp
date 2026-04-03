#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
//暴力法
// class Solution
// {
// public:
//     void gettarget(vector<int> nums,int target)
//     {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     cout<<i<<" "<<j<<endl;
                    
//                 }
                
//             }
//         }
//     }

// };

class Solution
{
public:
    void gettarget(vector<int> nums,int target)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {   
            auto iterm=mp.find(target-nums[i]);
            if(iterm!=mp.end())
            {   
                cout<<iterm->second<<" "<<i<<endl;
                
            }
            mp.insert(pair<int,int>(nums[i],i));
        }
        cout<<"False"<<endl;
    }

};






int main()
{
    Solution s;
    vector<int> nums={2,7,3,7};
    int target=9;
    s.gettarget(nums,target);
    return 0;
}
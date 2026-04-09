#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<set>
//方法一：双指针
// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         vector<vector<int>> result;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size()-2;i++)
//         {
//             if(nums[i]>0 ||nums[nums.size()-1]<0)
//             {
//                 return result;
//             }
//             if(i>0 && nums[i]==nums[i-1])
//             {
//                 continue;
//             }

//             int left=i+1;
//             int right=nums.size()-1;
//             while(left<right)
//             {
//                 if(nums[i]+nums[left]+nums[right]<0)
//                 {
//                     left++;
//                 }
//                 else if(nums[i]+nums[left]+nums[right]>0)
//                 {
//                     right--;
//                 }
//                 else
//                 {
//                     result.push_back(vector<int>{nums[i],nums[left],nums[right]});
//                     while(left<right && nums[left]==nums[left+1]) left++;
//                     while(left<right && nums[right]==nums[right-1]) right--;
//                     left++;
//                     right--;
//                 }
//              }
//         }
//         return result;
//     }

// };
//方法二：set去重
class Solution
{ 
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> result_set;
        sort(nums.begin(),nums.end()); //排序-算法
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0 ||nums[nums.size()-1]<0)
            {
                break;
            }
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]<0)
                {
                    left++;
                }
                else if(nums[i]+nums[left]+nums[right]>0)
                {
                    right--;
                }
                else
                {
                    result_set.insert(vector<int>{nums[i],nums[left],nums[right]}); //插入
                    left++;
                    right--;
                }
            }
        }
        return vector<vector<int>>(result_set.begin(),result_set.end()); //转换到结果向量中
    }

};

void printVector(vector<vector<int>> &result )
{
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
        
    
}

void test()
{
    vector<int> nums={-1,0,0,0,1,2,-1,-4};
    Solution s;
    vector<vector<int>> result=s.threeSum(nums);
    printVector(result);
}

int main()
{
    test();
    return 0;
}
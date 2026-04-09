#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<set>

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums,int target)
    {
        set<vector<int>> result_set;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums.size()<4) break;
            for(int j=i+1;j<nums.size()-2;j++)
            {
                
                int left=j+1;
                int right=nums.size()-1;
                while(left<right)
                {
                    int sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target) right--;
                    else if(sum<target) left++;
                    else
                    {
                        result_set.insert(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }
        return vector<vector<int>>(result_set.begin(),result_set.end());
    }

};
void printVector(vector<vector<int>> &result)
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
    vector<int> nums={-1,0,1,2,-1,-4,5,-2,-3,6};
    Solution s;
    vector<vector<int>> result=s.fourSum(nums,1);
    printVector(result);
}

int main()
{
    test();
    return 0;
}
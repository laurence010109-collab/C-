#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>

class Solution
{
public:
    vector<int> insternum(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_set<int> result_set;
        unordered_set<int> n1(nums1.begin(), nums1.end());
        for(int num: nums2)
        {
            if(n1.find(num)!=n1.end())
            {
                result_set.insert(num);
            }
        }
        vector<int> result(result_set.begin(), result_set.end());
        return result;
    }
};

int main()
{
   Solution s;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,1,2};
    vector<int> result = s.insternum(nums1, nums2);
    for(int i: result)
    {
        cout<<i<<" ";
    }
    return 0;
}
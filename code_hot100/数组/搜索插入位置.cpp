#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution 
{
public:
    int searchInsert(vector<int>&nums,int target)
    {
        int left=0;
        int right=nums.size()-1;
        
        while(left<=right)
        {
            int middle=left+(right-left)/2;
            if(nums[middle]>target)
            {
                right=middle-1;
            }
            else if(nums[middle]<target)
            {
                left=middle+1;
            }
            else{
                return middle;
            }
        }
        return left;
    }

};
int main()
{
    vector<int> nums={1,3,5,6,7,9,11};
    int target=8;
    Solution s;
    int result=s.searchInsert(nums,target);
    cout<<result<<endl;
    return 0;
}
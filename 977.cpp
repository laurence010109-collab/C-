#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
class Slution
{
    public:
    vector<int> pinfan(vector<int> &nums)
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }

};

int main()
{
    vector<int> nums={-4,-1,0,3,10};
    Slution s;
    vector<int> res=s.pinfan(nums);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
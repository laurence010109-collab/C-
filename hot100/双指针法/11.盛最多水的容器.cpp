#include<iostream>
using namespace std;
#include<vector>
class Solution{
public:
    int maxArea(vector<int>& height)
    {
        int left=0;
        int right=height.size()-1;
        int max_area=0;
        while(left<right)
        {   


            int kuabdu=right-left;
            int min_hright=min(height[left],height[right]);
            max_area=max(max_area,kuabdu*min_hright);
            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_area;
    }


};


int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    Solution s;
    int result=s.maxArea(height);
    cout<<result<<endl;
    return 0;

}
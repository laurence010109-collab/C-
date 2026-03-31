#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a,c,b;
    int presum=0;
    vector<int> nums(n);
    vector<int> sums(n);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums[i]=a;
        presum+=nums[i];
        sums[i]=presum;
    }
    while(cin>>c>>b)
    {
        cout<<sums[b]-sums[c-1]<<endl;
    }
    return 0;
}
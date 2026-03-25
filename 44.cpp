#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int sum=0;
    int result=INT32_MAX;
    vector<vector<int>> v1(x,vector<int>(y,0));
    vector<int> v(x+y);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>v1[i][j];
            sum+=v1[i][j];
        }
        v[i]=sum;
    }
    for(int j=0;j<y;j++)
    {   int num=0;
        for(int i=0;i<x;i++)
        {
            num+=v1[i][j];
        }
        v[x+j]=num;
    }
    for(int i=0;i<x+y;i++)
    {
        result=min(result,abs(sum-v[i]-v[i]));
    }

    cout<<result<<endl;
    return 0;

}
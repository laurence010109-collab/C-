#include<iostream>
#include<string>
using namespace std;
#include<vector>

// class Solution
// {
// public:



// };

int main()
{
    int n,b,c,num;
    int sum=0;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum+=num;
        v[i]=sum;
        
    }

    while(cin>>b>>c)
    {
        if (b == 0) {
            cout << v[c] << endl;
        } else {
            cout << v[c] - v[b-1] << endl;
        }
    }





    // int sum=0;
    // vector<int> vectn;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>num;
    //     vectn.push_back(num);
    // }
    // while(cin>>b>>c)
    // {
    // for(int i=b;b<c;b++)
    // {
    //     sum+=vectn[i];
    // }
    // cout<<sum<<endl;
    // }
    // return 0;
}
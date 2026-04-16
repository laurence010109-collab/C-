#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
    // vector<char> reverseChar(vector<char> &v)
    // {
        
    //     for(int i=0,j=v.size()-1;i<j;i++,j--) swap(v[i],v[j]);
    //     return v;
    // }

//reverse写法
vector<char> reverseChar(vector<char> &v)
{
    reverse(v.begin(),v.end());
    return v;
}


    void printvector(vector<char> &v)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }


void test()
{
    vector<char> v={'H','a','c','d','h','e'};
    
    vector<char> v1=reverseChar(v);
    printvector(v1);
}

int main()
{
    test();
    return 0;
}
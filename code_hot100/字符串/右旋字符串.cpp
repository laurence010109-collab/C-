#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
int main()
{
    int k;
    string s;
    cin>>k;
    cin>>s; 
    reverse(s.begin(),s.end());
    reverse(s.begin(),s.begin()+k);
    reverse(s.begin()+k,s.end());
    cout<<s;
    return 0;


}
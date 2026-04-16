#include<iostream>
#include<string>
using namespace std;
#include<algorithm>

class Solution
{
public:
    string reverseString(string s,int k) 
    {
        for(int i=0;i<s.size();i+=2*k)
        {
            if(s.size()-i<k)
            {
                reverse(s.begin()+i,s.end());
            }
            else
            {
                reverse(s.begin()+i,s.begin()+i+k);
            }
        }
        return s;
    }
};

void test()
{
    string s="abcdefgsdfksdfjksdmfsndk";
    int k=2;
    Solution s1;
    string target=s1.reverseString(s,k);
    cout<<target<<endl;
}

int main()
{
    test();
    return 0;
}
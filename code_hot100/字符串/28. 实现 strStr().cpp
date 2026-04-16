#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solusion
{
public:
    void getNext(int *next,const string &s)
    {
        int j = 0;
        next[0] = j;
        for(int i=1;i<s.size();i++)
        {
            while(j>0 && s[i]!=s[j])
            {
                j=next[j-1];
            }
        
            if(s[i]==s[j])
            {
                j++;
            }

            next[i] = j;
        }
    }


    int strStr(string haystack, string needle)
    {
        if(needle.size()==0) return 0;
        vector<int> next(needle.size());
        getNext(&next[0],needle);
        int j = 0;
        for(int i=0;i<haystack.size();i++)
        {
            while(j>0 && haystack[i]!=needle[j] )
            {
                j=next[j-1];
            }
            if(haystack[i]==needle[j]) j++;
            if(j==needle.size()) return (i-j+1);
        }
        return -1;
    }
};


void test()
{   
    string haystack = "hello";
    string needle = "ll";
    Solusion s;
    cout<<s.strStr(haystack,needle)<<endl;
}

int main()
{
    test();
    return 0;

}
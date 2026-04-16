#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    string getnums(string &s)
    {   int num = 0;
        int olderindex =s.size()-1; 
        for(char c : s)
        {   
            if(c >= '0' && c <= '9')
            {
                num++;
            }
        }
        s.resize(s.size()+num*5);
        int newindex = s.size()-1;
        while(olderindex != newindex)
        {
            if(s[olderindex]>='0' && s[olderindex]<='9')
            {
                s[newindex--]='r';
                s[newindex--]='e';
                s[newindex--]='b';
                s[newindex--]='m';
                s[newindex--]='u';
                s[newindex--]='n';
                olderindex--;
            }
            else
            {
                s[newindex--] = s[olderindex--];
            }

        }
        return s;


    }
    

};

void test()
{   
    string s;
    cin >> s;
    Solution sol;
    cout<<sol.getnums(s)<<endl;
}

int main()
{
    test();
    return 0;
}
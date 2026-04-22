#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
class Solution
{
public:

    string word(string &s)
    {
        int fast=0;
        int slow=0;
        for(fast;fast<s.size();fast++)
        {   
            if(s[fast]!=' ')
            {   
                if(slow!=0) s[slow++]=' ';
                while(s[fast]!=' '&&fast<s.size()) s[slow++]=s[fast++];//遇到单词就补上，直到遇到空格说明单词结束。
            }
        }
        s.resize(slow);
        return s;
    }
    string changWord(string &s)
    {   
        word(s);
        cout<<s<<endl;
        reverse(s.begin(),s.end());
        cout<<s<<endl;


        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+start,s.begin()+i);
                //
                start=i+1;
            }
        }
        reverse(s.begin()+start,s.end());
        return s;
    }
};

void test()
{
    string s="  hello    world  ni";
    Solution sol;
    cout<<sol.changWord(s)<<endl;

}

int main()
{
    test();
    return 0;
}
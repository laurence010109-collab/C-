#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    string replace_number(string s)
    {
        int slow=s.size()-1;
        for(int i=0;i<s.size();i++)
        {   
            if(s[i]>='0'&&s[i]<'a')
            {
                s.resize(s.size()+5);//每遇到一个数字就扩展5个位置
            }
        }
        int fast=s.size()-1;
        for(slow;slow>0;slow--)
        {
            if(s[slow]>='0'&&s[slow]<'a')
            {
                s[fast--]='r';
                s[fast--]='e';
                s[fast--]='b';
                s[fast--]='m';
                s[fast--]='u';
                s[fast--]='n';
            }
            else s[fast--]=s[slow];
        }
        return s;
    }

};

void test()
{
    string s = "a1b2c3";
    Solution s1;
    string res = s1.replace_number(s);
    cout << res << endl;

}

int main()
{
    test();
    return 0;
}
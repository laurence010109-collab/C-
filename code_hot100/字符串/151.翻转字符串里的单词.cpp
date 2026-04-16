#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string  removeExtraSpaces(string &s)
    {
        while(s.size()>0 && s[0]==' ') s.erase(s.begin()) ;
        while(s.size()>0 && s[s.size()-1]==' ') s.erase(s.end()-1);
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i-1] && s[i]==' ') s.erase(s.begin()+i--);
        }
        reverse(s.begin(),s.end());
        int start=0;
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]==' ' || i==s.size())
            {
                
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        return s;
    }
};


// void removeExtraSpaces(string& s) 
//     {//去除所有空格并在相邻单词之间添加空格, 快慢指针。
//         int slow = 0;   //整体思想参考https://programmercarl.com/0027.移除元素.html
//         for (int i = 0; i < s.size(); ++i) 
//         { //
//             if (s[i] != ' ') 
//             { //遇到非空格就处理，即删除所有空格。
//                 if (slow != 0) s[slow++] = ' '; //手动控制空格，给单词之间添加空格。slow != 0说明不是第一个单词，需要在单词前添加空格。
//                 while (i < s.size() && s[i] != ' ') 
//                 { //补上该单词，遇到空格说明单词结束。
//                     s[slow++] = s[i++];
//                 }
//             }
//         }
//         s.resize(slow); //slow的大小即为去除多余空格后的大小。
//     }


// void test1()
// {
//     int slow=0;
//     int fast=0;
//     for(fast;fast<s.size();fast++)
//     {
//         if(s[fast]!=' ')
//         {
//             if(slow!=0) s[slow++]=' ';
//             while(fast<s.size() && s[fast]!=' ')
//             {
//                 s[slow++]=s[fast++];
//             }
//         }
//     }
// }


void test()
{
    string s=" hello   word ";
    Solution s1;
    cout<<s1.removeExtraSpaces(s)<<endl;
}
int main()
{
    test();
    return 0;

}
#include <iostream>
#include <string>
using namespace std;

// 技巧法现
class Solusion
{
public:
    bool repeadtedstring(string s)
    {
        string str=s+s;
        str.erase(str.begin());
        str.erase(str.end()-1);
        return str.find(s)!=-1;

    }

};
// KMP算法
class Solusion2
{
public:
    void getnext(int* next,string s)
    {
        int j=0;
        next[0]=j;
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
            next[i]=j;
        }
    }

    bool repeadstring(string s)
    {
        if(s.size()==0) return false;
        int next[s.size()];
        getnext(next,s);
        if(next[s.size()-1]!=0 && s.size()%(s.size()-next[s.size()-1])==0) return true;
        return false;
    }

};







void test()
{
    string s = "adkaldla";
    Solusion2 s1;
    cout<<s1.repeadstring(s)<<endl;
}

int main()
{
    test();
    return 0;
}   

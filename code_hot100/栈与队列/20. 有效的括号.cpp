#include<iostream>
#include<stack>
using namespace std;
#include<string>

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        if(s.size()%2!=0) return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push(')');
            else if(s[i]=='{') st.push('}');
            else if(s[i]=='[') st.push(']');
            else if(st.empty() || s[i]!=st.top()) return false;
            else st.pop();
        }
        return st.empty();
    }
};

void test()
{   
    string s = "()[]{]]]]}";
    Solution s1;
    cout << s1.isValid(s) << endl;
}

int main()
{
    test();
    return 0;
}
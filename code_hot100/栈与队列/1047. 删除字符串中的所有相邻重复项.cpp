#include<iostream>
using namespace std;
#include<string>
#include<stack>
#include<algorithm>
class Solution
{
public:
    string removeDoplicates(string S)
    {   
        stack<char> st;
        for(char s:S)
        {
            if(st.empty() || s!=st.top()) st.push(s);
            else st.pop();
        }
        string result;
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

void test()
{
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.removeDoplicates(s)<<endl;
}

int main()
{
    test();
    return 0;
}
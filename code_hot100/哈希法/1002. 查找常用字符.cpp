#include<iostream>
#include<string>
using namespace std;
#include<vector>

class Solution
{
public:
    vector<string> findchar(vector <string> words)
    {

        int hash[26]={0};
        for(int i=0;i<words[0].size();i++)
        {
            hash[words[0][i]-'a']++;
        }
        
        for(int i=1;i<words.size();i++)
        {
            int otherhash[26]={0};
            for(int j=0;j<words[i].size();j++)
            {
                otherhash[words[i][j]-'a']++;
            }
            for(int k=0;k<26;k++)
            {
            hash[k]=min(hash[k],otherhash[k]);
            }

        }
        vector <string> ans;
        for(int i=0;i<26;i++)
        {
            while(hash[i]!=0)
            {
                string s(1,'a'+i);
                ans.push_back(s);
                hash[i]--;
            }
        }
        return ans;
    }
};
void print(vector<string> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector <string> words;
    Solution s;
    words.push_back("bella");
    words.push_back("label");
    words.push_back("roller");
    vector<string>s1=s.findchar(words);
    print(s1);
    cout<<endl;
    return 0;
}
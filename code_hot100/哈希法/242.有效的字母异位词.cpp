#include<iostream>
using namespace std;
#include<string>
class Solution
{
public:
    bool isAnagram(string s,string t)
    {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            hash[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(hash[i]!=0) return false;
        }
        return true;
    }

};

int main()
{
    Solution s;
    bool N=s.isAnagram("anagram","naga");
    cout<<N<<endl;

    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include <string>

class Solution
{
public:
    bool canConstruct(string ransom,string magazine)
    {
        if(ransom.size()>magazine.size()) return false;
        int hash[26]={0};
        for(int i=0;i<magazine.size();i++)
        {
            hash[magazine[i]-'a']++;
        }
        for(int j=0;j<ransom.size();j++)
        {
            if(hash[ransom[j]-'a']==0) return false;
            hash[ransom[j]-'a']--;
        }
        return true;
    }
};

void test()
{
    Solution s;
    cout<<s.canConstruct("aa","aab")<<endl;
}

int main()
{
    test();
    return 0;
}
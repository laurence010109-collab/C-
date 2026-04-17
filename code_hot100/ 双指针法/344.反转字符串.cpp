#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
class Solusion
{
public:
    vector<char> reversestring(vector<char> &s)
    {
        int slow = 0;
        int fast =s.size()-1;
        while(slow<fast)
        {
            swap(s[slow], s[fast]);
            slow++;
            fast--;
        }
        return s;
    }

};

void test()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solusion sol;
    vector<char> res = sol.reversestring(s);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

}

int main()
{
    test();
    return 0;
}
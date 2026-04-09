#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
public:
    int fourSumCount(vector<int> &A,vector<int> &B,vector<int> &C,vector<int> &D)
    { 
        unordered_map<int,int> my_map;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                my_map[A[i]+B[j]]++;
            }
        }

        int count=0;
        for(int i=0;i<C.size();i++)
        {
            for(int j=0;j<D.size();j++)
            {
                if(my_map.find(0-C[i]-D[j])!=my_map.end())
                {
                    count+=my_map[0-C[i]-D[j]];
                }
            }
        }
        return count;
    }
};

void test()
{
    vector<int> A={1,1};
    vector<int> B={-2,-1};
    vector<int> C={-1,2};
    vector<int> D={0,2};
    Solution s;
    int count=s.fourSumCount(A,B,C,D);
    cout<<"count: "<<count<<endl;
}

int main()
{
    test();
    return 0;
}
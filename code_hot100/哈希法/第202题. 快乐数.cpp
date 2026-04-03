#include<iostream>
using namespace std;
#include<unordered_set>
class Solutiom
{
public:
    int getnum(int num)
    {
        int sum = 0;
        while(num)
        {
            sum+=(num%10)*(num%10);
            num/=10;
        }
        return sum;

    }
        bool isHappy(int num)
        {
            unordered_set<int> record;
            while(1)
            {
                int sum = getnum(num);
                if(sum==1) return true;
                if(record.find(sum)!=record.end())
                {
                    return false;
                }
                else
                {
                    record.insert(sum);
                    num=sum;
                }
            }
        }

    
};


int main()
{
    Solutiom s;
    cout<<s.isHappy(256)<<endl;
    return 0;

}
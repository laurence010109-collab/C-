#include<iostream>
using namespace std;
class AbustractCalculate
{
public:
    virtual int getResult()=0;
    int m_num1,m_num2;
};

class AddCalculate:public AbustractCalculate
{
public:
    int getResult()
    {
        return m_num1+m_num2;
    }

};

class SubCalculate:public AbustractCalculate
{
public:
    int getResult()
    {
        return m_num1-m_num2;
    }

};

class MulCalculate:public AbustractCalculate
{
public:
    int getResult()
    {
        return m_num1*m_num2;
    }

};

void get(AbustractCalculate *p)
{
    cout<<p->getResult()<<endl;

}

int main()
{
     AddCalculate add;
     add.m_num1=10;
     add.m_num2=20;
     get(&add);
     return 0;
}
#include<iostream>
using namespace std;

class Base
{
public:
    virtual void func()=0;
};

class Base1:public Base
{
public:
    void func()
    {
        cout<<"Base1"<<endl;
    }
};

class Base2:public Base
{
public:
    void func()
    {
        cout<<"Base2"<<endl;
    }
};

void func(Base &b)
{
    b.func();
}

int main()
{
    Base1 b1;
    func(b1);

        Base2 b2;
        func(b2);
    return 0;
}
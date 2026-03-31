#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout<<"The animal speaks."<<endl;
    }

};

class Cat:public Animal
{
public:
    void speak()
    {
        cout<<"小咪在说话"<<endl;
    }
};

class Dog:public Animal
{
public:
    void speak()
    {
        cout<<"小狗在说话"<<endl;
    }
};

void Dospeak(Animal &a)
{
    a.speak();
}

int main()
{
    Cat c;
    Dog d;
    Dospeak(c);
    Dospeak(d);
    return 0;
}

#include<iostream>
using namespace std;
class AbstractDrink
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;

    void MakeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething(); 
    }
};

class Coffee : public AbstractDrink
{ 
public:
    void Boil()
    {
        cout << "煮农夫山泉" << endl;
    }
    void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    void PutSomething()
    {
        cout << "加入糖" << endl;
    }

};

class Tea : public AbstractDrink
{
public:
    void Boil()
    {
        cout << "煮自来水" << endl;
    }
    void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }
    void PutSomething()
    {
        cout << "加入枸杞" << endl;
    }
};

void dowork(AbstractDrink *p)
{
    p->MakeDrink();
    delete p;
}

int main()
{
    dowork(new Coffee);
    dowork(new Tea);
    return 0;
}
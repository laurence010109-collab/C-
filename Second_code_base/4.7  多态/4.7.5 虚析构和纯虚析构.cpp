#include<iostream>
using namespace std;
#include<string>

class Animal
{

public:
    Animal()
    {
        cout << "Animal 构造函数" << endl;
    }
    virtual void speak() = 0;
    virtual ~Animal()
    {
        cout << "Animal 析构函数" << endl;
    }

};

class Cat : public Animal
{
public:
    Cat(string name)
    {
        m_name = new string(name);
        cout << "Cat 构造函数" << endl;
    }
    void speak()
    {
        cout <<*m_name<< "miao" << endl;
    }
    ~Cat()
    {
        if (m_name != NULL)
        {
            delete m_name;
            m_name = NULL;
        }
        cout << "Cat 析构函数" << endl;
    }
    string *m_name;
};

void dowork(Animal *animal)
{
    animal->speak();
    delete animal;
}
int main()
{
    dowork(new Cat("mimi"));//Cat("mimi")根据构造函数创建对象
    return 0;
}

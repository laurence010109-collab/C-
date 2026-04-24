#include<set>
#include<iostream>
using namespace std;


void peintset(set<int> &my_set)
{
    for(const int&elem:my_set)
    {
        cout<<elem<<endl;
    }
}
void test()
{
    set<int> my_set;
    my_set.insert(10);
    my_set.insert(30);
    my_set.insert(20);
    peintset(my_set);

}

int main()
{
    test();
    return 0;
}
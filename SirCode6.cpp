#include<iostream>
#include<cstdio>

using namespace std;
namespace ns1
{   
    void display();
    class Test
    {
        public:
            void display(void );
    };
}

void ns1::display(void)
{
    cout << "Hello ns::display()" << endl;
}

void ns1::Test::display()
{
    cout << "Hello ns::Test::display()"<< endl;
}

class Item
{
    int data1;
    public:
        void setItem(int );
        void getItem();
};

inline void Item::setItem(int d)
{
    data1=d;
}

inline void Item::getItem()
{
    printf("Data1 =%d",data1);
}
int main()
{
    Item obj1;
    obj1.setItem(100);
    obj1.getItem();
    ns1::display();
    ns1::Test test1;
    test1.display();
}

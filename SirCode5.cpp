#include <iostream>
#include <cstdio>

class Item
{
    int data1;

public:
    void setItem(int d);
    void getItem();
};

void Item::setItem(int d)
{
    data1 = d;
}

void Item::getItem()
{
    printf("The GetItem data1 =%d \n", data1);
}

void func1(Item obj)
{
    obj.setItem(200);
    obj.getItem();
}

void func2(Item *ptr)
{
    //ptr->setItem(300); if mentioned then the value=300 otherwise value=100
    ptr->getItem();
}

int main()
{
    Item obj1;
    obj1.setItem(100);
    obj1.getItem();
    func1(obj1);
    func2(&obj1);
    return 0;
}
// This code contains the use case of pointer to the object
#include <cstdio>
#include <iostream>
using namespace std;
class Item
{
    int data1;              // Default member is private can be acccessed only by its class
    public:
        int data2;
    private:
        int data3;
    protected:
        int data4;
    public:
    void setItem(int d1, int d2)
    {
        data1 = d1;
        data3 = d2; 
    }
    void getItem()
    {
        printf("Data1 = %d\nData2 = %d\n",data1,data3);
    }
    // Note: Method is defined inside Public access specifier 
};

int main()
{
    Item obj1;
    Item *cptr;
    cptr= &obj1;
    cptr->setItem(200,100);
    cptr->getItem();
    return 0;
}
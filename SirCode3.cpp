// This code contains the this pointer 
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
        cout << "this ="<< this << endl;
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
    class Item obj1;
    obj1.setItem(10,20);
    obj1.getItem();
    obj1.data2=300;
    cout << obj1.data2 << endl;
    cout <<"add of obj1 "<< &obj1 << endl;
    
    Item obj2;
    cout <<"add of obj2 "<< &obj2 << endl;
    obj2.setItem(100,200);
    obj2.getItem();
    obj2.data2=400;
    cout << obj2.data2 << endl;
    
    return 0;
}
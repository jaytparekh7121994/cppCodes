// This code contains the access specifiers 

#include <iostream>
using namespace std;

class Item
{
    int data1;

public:
    int data2;

protected:
    int data3;

private:
    int data4;
};

int main()
{
    class Item obj1;
    //obj1.data1 = 10;
    obj1.data2 = 20;
    //obj1.data3 = 30;
    //obj1.data4 = 40;

    //cout << obj1.data1 << endl;
    cout << obj1.data2 << endl;
    //cout << obj1.data3 << endl;
    //cout << obj1.data4 << endl;

    //private and protected cannot be accessed by main method
    //private member can be accessed by its class only. 
    //Eg; Class has a method and it can access the private member 

    // public member can be accessed by its own class, sub class and outside class as well.
    // protected member can be accessed by its sub class. It is inheritance 

    return 0;
}
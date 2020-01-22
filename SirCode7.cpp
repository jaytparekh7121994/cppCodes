#include <iostream>
using namespace std;

class Item
{
    int data1;
public:
    Item()
    {
        data1 = 0;
        cout << "In void constructor"<<data1<< endl;
        
    }
    Item(int d)
    {
        data1 = d;
        cout << "In Value constructor"<<data1<< endl;
       
    }

    void getItem()
    {
        cout << "Data1" << data1 << endl;
    }
    void setItem(int d)
    {
        data1 = d * 2; //This didnt work 
    }
};

int main()
{
    Item obj1(100); //runs the value constructor
    Item obj2;  //runs the default constructor 
    
    obj1.getItem();
    obj2.getItem();

    obj1.setItem(22);
    obj2.setItem(44);

    obj1.getItem();
    obj2.getItem();
}
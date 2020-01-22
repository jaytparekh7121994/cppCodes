#include <iostream>

using namespace std;

class Item
{
public:
    int data;
};

int main()
{
    class Item obj1;
    class Item obj2;
    Item *c1ptr, *c2ptr;
    c1ptr = &obj1;
    c2ptr = &obj2;

    cout << "address of obj1 ="<<obj1.data << endl;
    cout << "address of obj1 ="<<obj2.data << endl;
    cout <<"address of c1ptr ="<< c1ptr->data <<endl;
    cout <<"address of c2ptr ="<<c2ptr->data <<endl;

    obj1.data = 10;
    obj2.data = 20;
    c1ptr->data = 100;
    c2ptr->data = 200;

    cout <<"obj1.data ="<< obj1.data << endl;
    cout <<"obj2.data ="<< obj2.data << endl;
    cout <<"c2ptr->data ="<<c1ptr->data <<endl;
    cout <<"c2ptr->data ="<<c2ptr->data <<endl;

    return 0;
}

#include <iostream>

using namespace std;

class Vehicle
{
    public:
        string brand = "Ford";
        void honk(){
            cout<< "Makes sound Tut,Tut!"<<endl; 
        }
    Vehicle(){
        cout << "Basic Constructor Vehicle"<<endl;
    }
};

class Car:public Vehicle
{
    public:
        string model = "Mustang";
    Car(){
        cout << "Constructor of Car"<< endl;
    }
};

class Engine : public Car
{
    public:
        string company = "Paccar";
    Engine(){
        cout << "Constructor of Engine"<<endl;
    }
};

int main()
{
    Engine myCar;
    myCar.honk();
    cout << myCar.brand+ " "+ myCar.model+" has an Engine of "+myCar.company <<endl;
    return 0;
}

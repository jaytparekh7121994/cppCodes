
#include <iostream>
using namespace std;

class Animal
{
    protected:
        int legs;
    public:
        void AnimalSound()  
        {
            cout << "Animal makes a Sound"<< endl;
        }
};

class Pig : public Animal 
{
    public:
    int setLegs()
    {
       legs = 4;        //Inheritance
       return legs;
    }
    public:
        void AnimalSound()  //Polymorphism
        {
            cout << "Pig Says wee wee" << endl;
        }
};

class Dog : public Animal
{
    public:
    int setLegs()
    {
       legs = 4;        // Protected member is been accessed 
       return legs;
    }
    
    public:
        void AnimalSound()
        {
            cout << "Dog says bow bow" << endl;  //Method of class is been overridden
        }  
};

int main(){
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    cout <<"Pig's legs"<<myPig.setLegs() << endl;
    cout <<"Dog's legs"<<myDog.setLegs() << endl;
    myDog.AnimalSound();
    myPig.AnimalSound();
    myAnimal.AnimalSound();
    //cout<<"Animal's leg"+myAnimal.legs=2<<endl;
    
    return 0;
}
#include<iostream>

using namespace std;

class Enemy
{
public:
    virtual void attack() //when we define a virtual function ,the program understands that we are using it polymorphically
                        //and calls the same function inside the derived classes according to the pointer objects
    {
        cout<<"this executed because this class didn't override it "<<endl;
    }

};

class Laziness : public Enemy
{
public:
    void attack()  //both derived functions have the attack function but both functions give different output when called
    {
        cout<<"Laziness Attacked you "<<endl;
    }
};

class Anger : public Enemy
{
public: //since this class doesnt have a fucntion to override the virtual function thus the virtual function will execute
//void attack()
  //  {
    //    cout<<"Anger Attacked you "<<endl;
    //}
};



int main()
{
    Laziness l1;
    Anger a1;
    // Enemy e1 = a1; this will give an error since we cant assign the value of an object to another object of different classes
    Enemy *e1 = &a1; //base class object pointers pointing to address of objects of derived classes
    Enemy *e2 = &l1; //since we cant assign different objects to each other, so we create pointer objects which point to the address of that object.
    e1->attack(); //calling the attack function through the base class objects
    e2->attack(); //and the function will automatically call the attack function of the class the pointer object is pointing to


return 0;
}



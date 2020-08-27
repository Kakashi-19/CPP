#include<iostream>
using namespace std;

class tube
 {
     public:
     tube() //constructor
     {
         cout<<"Object Created"<<endl;
     }
     ~tube() //Deconstrutor
     {
         cout<<"Object Destroyed"<<endl;
     }
     void crap() //Regular Function
     {
         cout<<"regular function works with regular object"<<endl;
     }

     void crap2() const   //constant function
     {
     cout<<"constant function works with constant object"<<endl;
     }
 };

int main()
{
    tube tube1;
    tube1.crap();

    const tube tube2;
    tube2.crap2();

    return 0;
}

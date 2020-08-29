#include<iostream>
 using namespace std;

 class base
 {
     public:
     base()
     {
         cout<<"Base constructor"<<endl;  //called as soon as a daughter object is made

     }
     ~base()
     {
         cout<<"Base Deconstructor"<<endl;
     }
 };
class derived : public  base{

public:
derived()
{
    cout<<"Derived constructor"<<endl; //called after the base constructor
}

~derived()
{
    cout<<"Derived Deconstructor"<<endl;
}
};

int main()
{

    derived d1;


    return 0;

}

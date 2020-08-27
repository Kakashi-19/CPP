#include<iostream>
using namespace std;

class base
{
public:
    int pubVar;
    base()
    {

    }
protected:
    int protVar;
private:
    int priVar;

friend void FriendFunction(base obj);


};

class derived : public base
{
    public:
    derived()
    {
    pubVar = 1;
    protVar = 1;
    //priVar = 1;
    cout<<pubVar<<endl;
    cout<<protVar<<endl;
    //cout<<priVar<<endl;  Derived class has no access to private variables and functions of the base class
    }

};

void FriendFunction(base obj)
{
    obj.pubVar = 2;
    obj.protVar = 2;
    obj.priVar = 2;

    cout<<obj.pubVar<< " " <<obj.protVar<< " "<<obj.priVar<<endl;  //Friend function has access to everything in the class
}

int main()
{
    base b1;
    derived d1;
    FriendFunction(b1);
    b1.pubVar = 3;
  //  b1.protVar = 3;
  //  b1.priVar = 3;               main function  and other regular functions have no access to either protected or private variables or functions
    cout<<b1.pubVar<<endl;
   // cout<<b1.protVar<<endl;
   // cout<<b1.priVar<<endl;
}










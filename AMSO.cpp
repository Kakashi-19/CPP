#include<iostream>
using namespace std;


class notes
{
public:
    void crap()
    {
        cout<<"working fine\n";
    }
};

int main()
{
    int a  = 4;
    notes noteObject;
    notes *npobject = &noteObject; //pointer pointing to the address of an object inside the class
    npobject->crap(); //using the arrow  memeber selection operator to access the function inside the class
    noteObject.crap(); //using . to access the function inside the class

    return 0;
}

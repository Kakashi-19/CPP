#include<iostream>
 using namespace std;

class golu
 {
   public:
       int regVar;
       const int consVar; //constant variable or attribute
       golu(int a, int b): //using the member initialization list as the constructor will take a class object ,here,  constant variable as input
       regVar(a), consVar(b) //assigning values to the variables
       {
         cout<<"Assigned values to the variables using Member Initialization List"<<endl;
       }
       void print()
       {
           cout<<"The value of regular variable is : "<<regVar<<endl;
           cout<<"The value of constant variable is : "<<consVar<<endl;

       }


 };
int main()
{
    golu gillu(10, 20);
    gillu.print();
                       //we can access both regVar and consVar values but we cant change the value of consVar since it is a constant function


    return 0;
}

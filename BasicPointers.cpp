#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *pa = &a;        //declare a pointer variable with asterisk('*') and data type should be same as variables
    string b = "world";  //don't store the pointer with same name as variable
    string *pb = &b;     //Ampersand('&') character contains the address of the variable

    cout<<*pb<<endl; //using asterisk before a pointer variable is called dereferencing of a pointer
    cout<<pb<<endl;
    cout<<*&a<<endl;
    cout<<&*&a<<endl;
 return 0;
}

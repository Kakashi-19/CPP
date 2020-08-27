#include<iostream>

using namespace std;
void passByValue(int x); //function will take value as an input
void passByReference(int *x); //function will take address as an input

int main() {

int betty = 13;

int sandy = 13;

passByValue (betty); //passing value of  the var
passByReference (&sandy); //passing address of the var

cout << "bettty is now " << betty << endl;
 cout << "sandy is now " << sandy << endl;
}
void passByValue (int x){

x = 99;  //the value of betty wont change since passing by values provides the function with a copy of original var
}
void passByReference(int *x){

*x=66;  //the value of sandy changes as the function have the original address of the var i.e, the var itself
}

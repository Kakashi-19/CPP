#include<iostream>

using namespace std;

void printNumber(int x) //function to deal with int inputs
{
cout << "i am printing an integer " << x << endl;
}

void printNumber(float x) //function with same to deal with float inputs
{
cout << "now i am printing a float " << x <<endl;
}

int main ()
{

int a = 54;
float b = 32.4896;
printNumber (a); //int input
printNumber (b); //int input

return 0;

}

#include<iostream>
using namespace std;


double divide(double n1, double n2)
{
    if(n2 == 0)
    {
        throw "ZeroError"; ///throw statement to throw a potential error
    }
    return n1/n2;
}


int main()
{
    try  ///the try block have the code in which there might be chance of a potential error
    {
        double a , b;
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<divide(a, b);
    }

    catch(...) ///catch function to catch the error thrown by the throw statement
    {          ///catch() can take either ... as argument,i.e generic argument for any type of error
               ///or basic function arguments like int, char, bool etc and use it inside the catch function and you can also make catch function for each
        cout<<"ZeroError : Cant Divide by Zero";
    }
}

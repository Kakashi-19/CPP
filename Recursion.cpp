#include<iostream>

using namespace std;

int fact(int a)
{
    if(a == 1 || a == 0) //base case to avoid infinite loop
    {
        return 1;
    }
    else
    {
        return a * fact(a-1); //calling the function within the function
    }
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<< fact(a);

    return 0;
}

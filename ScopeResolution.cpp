#include<iostream>

using namespace std;
int tuna = 20; //global variable
int main()
{
    double tuna = 10.5; //local variable
    cout<<tuna<<endl;
    cout<<::tuna; //using unary scope resolution operator to use global variable

    return 0;
}

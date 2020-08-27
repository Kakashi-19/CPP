#include<iostream>

using namespace std;

double exp( double base, double power)
{
    double ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= base;
    }
    return ans;
}
int main()
{
    double base, power;
    cout<< "Enter Base Number: ";
    cin >> base;
    cout<< "Enter Power: ";
    cin>> power;
    cout<< exp(base, power);
 return 0;
}

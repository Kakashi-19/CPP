#include<iostream>
using namespace std;

int Q(int a , int b)
{

    if(a<b)
    {
       int ans = 0;
    }
    else{
    int ans = Q(a-b, b) + 1;

    cout<< ans;
    }
}

int main()
{
    Q(14, 3);
    return 0;
}

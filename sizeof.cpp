#include<iostream>

using namespace std;
int main()
{
    int arr[10];
    cout<<sizeof(arr)/sizeof(arr[0])<< endl;
    cout<<"sizeof(arr) / sizeof(arr[0])"<< endl;
    cout<<"In this way we can use the sizeof(); to determine the no of elements of an array";

    return 0;
}

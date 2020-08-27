#include<iostream>

using namespace std;
 int sum_array(int arr[], int size_array)
 {
     int sum = 0;
     for(int i= 0; i < size_array; i++)
     {
         sum+=arr[i];
     }
     return sum;
 }
int main()
{
    int arr[5] = {20, 44,56,60,11};
    cout<<"sum of elements of given array is: "<<sum_array(arr, 5);
    return 0;
}

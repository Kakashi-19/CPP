#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //declaration and initialization
    std::vector <int> arr;
    std::vector <int> arr(5,10) //this means the length of the initial array will be 5 and all elements will be set to 10;
    std::vector <int> arr {1,2,3,4,5};// uniform initialization
    std::vector <int> arr = {1,2,3,4,5};//non-uniform initialization

    //Element access



  return 0;
}

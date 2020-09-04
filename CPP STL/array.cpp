#include<array>
#include<iostream>
using namespace std;


int main()
{


//declare
std::array<int, 5> arr;

//initialize
std::array<int, 5> arr = {1, 2,3,4,5};  //initializer list
std::array<int, 5> arr {1,2,3,4,5}; // uniform initializer list


//Assign using initializer list  //this technique is not available in c type array
std::array<int, 5> arr;
arr = {1,2,3,4,5};

//arr.at(index)
//arr[index] //doesnt give out of bound exception
//arr.front()
//arr.back()
//arr.data()
 return 0;
}

#include<iostream>
#include<vector>

using namespace std;
/*
int main()
{
    vector <int> v1;
    for(int i=0; i<32; i++)
    {
        v1.push_back(i);
        cout<<"size : "<<v1.size()<<" capacity : "<<v1.capacity()<<endl;
        //shows how the capacity of the vector changes dynamically
        //when we try to push_back and element after the size and capacity are equal then the vector will create a new array of double size
        //but this takes a lot of time since the program creates multiple arrays and have to copy the elements to it each time a new array is created
        //so we reserve some space so that it doesnt happen a lot using the function reserve
    }
    return 0;
}
*/
//better way to use vectors
int main()
{
    vector <int> v1;
    for(int i=0; i<32; i++)
    {
        v1.reserve(30);//by reserving some space at the start we are reducing the amount of times the program will have to double the array and copy all the elements to it
        v1.push_back(i);
        cout<<"size : "<<v1.size()<<" capacity : "<<v1.capacity()<<endl;

    }
    return 0;
}

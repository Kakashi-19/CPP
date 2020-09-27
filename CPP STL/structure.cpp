#include<iostream>

using namespace std;

struct structure_name //union union_name;
                        //the size occupied by a union variable is equal to the size of the biggest variable irrespective of its data type
{
int a;
float b;
char c;

};

int main()
{
   structure_name structure_variable;
   cout<<"Enter an integer value for the structure variable: ";
   cin>>structure_variable.a;
   cout<<"Enter a float value for the structure variable : ";
   cin>>structure_variable.b;
   cout<<"Enter a character value for the structure variable : ";
   cin>>structure_variable.c;
   cout<<"Printing values of your structure variable"<<endl;
   cout<<structure_variable.a<<endl;
   cout<<structure_variable.b<<endl;
   cout<<structure_variable.c<<endl;
return 0;
}

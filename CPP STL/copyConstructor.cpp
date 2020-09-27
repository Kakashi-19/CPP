#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Parent
{
public:
   int a,b,c;
   Parent(int q, int w)
   {
    a = q;
    b = w;
   }
   void basic_function(); //prototyping function
};

void Parent:: basic_function() //using the scope resolution operator to create the function outside of the class
{
    cout<<"Enter the value of a, b, c : ";
    cin>>a>>b>>c;
    cout<<"The value of a , b , c are :"<<a<<" "<<b<<" "<<c<<endl;
}

class child : public Parent
{
 public:
    int d;
    child(int t, int y, int i) : Parent(t, y) //inheriting values of t and y from parent constructor
     {
     a = i; //if you want to assign some value particularly for this class object then you have to redefine it else theres no need
    // b = t; here b is already asssigned a value by the parent constructor so we dont need to reasssign it value unless we want
     d = y;
     }
     void print_function()
     {
          cout<<"The values are :"<<a<<" "<<b<<" "<<d<<endl; //7 3 5
}

};

int main()
{
//Parent p1;
//p1.basic_function();
child c1(3, 5, 7);
c1.print_function();
return 0;
}

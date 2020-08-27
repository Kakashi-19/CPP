#include<iostream>

using namespace std;
 class booth
 {
   public:
       int num;
       booth()
       {

       }
       booth(int a)
       {
           num = a;


       }

       booth operator+(booth obj) //operator overloaded function operator(+,-,*,/)
       {
           booth noob;
           //cout<<num<<endl; use this line to see how the num variable gets its value
           noob.num = num + obj.num; //the value of num will be of the object before the operator
           return noob;
       }
 };
 int main()
 {
     booth a(20);
     booth b(30);
     booth c(40);
     booth d;
     booth e;

     e= a+b;
     d = e + a;  //using operator overloading
     cout<<d.num;

     return 0;
 }

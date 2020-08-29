#include<iostream>
#include<string>
 using namespace std;

 template<class t> //declaring template for a generic data type t
 class compare
 {
  public:
      t first;
      t second;
      compare(t a,t b) //constructor for generic cases
      {
          first = a;
          second =b;
          cout<<"The bigger number is : "<<(first>=second?first:second)<<endl;

      }
 };
template<>
class compare <string> //redefining the class for special input type
{
public:
    compare(string a, string b)  //constructor for special case
    {
        cout<<"The bigger string is : "<<(a.length()>=b.length()?a:b)<<endl;   //using length() function of string header to compare string lengths
        }
};





 int main()
 {    //syntax for creating object
     ///className <inputType> objectName(inputValues);
     compare <int> c1(40, 50);
     compare <double> c2(40.5, 50.5);
     compare <string> c3("hello", "Namaskaar");



     return 0;

 }

#include<iostream>
 using namespace std;

 template<class t> //declaring template for a generic data type t
 class compare
 {
  public:
      t first;
      t second;
      compare(t a,t b)
      {
          first = a;
          second =b;
      }

    t bigger() //when inside the class you don't need to follow the template for member functions outsie the class
    {
        return (first>second?first:second);
    }

    t smaller(); //prototyping smaller inside the class like the header file

 };

 template <class t>  //you have to write this everytime you create a member of this class outside of the class
 t compare<t>::smaller() //syntax to declare the function to show that it belongs to the same class and uses the same template
 {                        ///returnType className<genericName>::fucntionName(){ task }
     return (first<second?first:second);
 }

 int main()
 {    //syntax for creating object
     ///className <inputType> objectName(inputValues);
     compare <int> c1(40, 50);
     cout<<"The bigger number is : "<<c1.bigger()<<endl;
     cout<<"The smaller number is : "<<c1.smaller();

     return 0;

 }

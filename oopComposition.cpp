#include<iostream>
#include<string>

using namespace std;

class Birthday
{
    private:
    int date, month, year;


 public:
     Birthday(int d, int m, int y)
     {
       date = d;
       month = m;
       year = y;
     }

     void print_birthday()
     {
         cout<<date<<"-"<<month<<"-"<<year<<endl;
     }
};

class People
{
  private:
      string name;
      Birthday dob; //Birthday object Bo

  public:
    People(string n, Birthday b): name(n), dob(b) //using MIL since we are dealing with objects as input types or generally when the input types are not regular
    {
    }
    void print_info()
    {
        cout<<name<< " was born on ";
        dob.print_birthday();
    }
};
 int main()
 {
     Birthday b1(19, 04, 1999);
     People p1("Vaibhav", b1); //passing birthday object b1 as input
     p1.print_info();

     return 0;
 }



















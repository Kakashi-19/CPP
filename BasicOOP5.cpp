#include<iostream>
#include<string>
using namespace std;


class Phone   //declaring a class
    {
    public:  // declaring attributes of objects of this class
        string manuf;
        int price;
        double rating;

    Phone(string M, int P, double R) //constructor with arguments used to easily assign attribute values to the objects
    {
        manuf = M;
        rating = R;
        price = P;
    }

    bool Buy() //an object function or method
    {
    if(rating >= 4.0)
        {
        return true;
    }
    else
    {
        return false;
    }
    }
    };
class Laptop : public Phone
{
 public:
    string use;
    string manuf;
     double rating;
     int price;

   Laptop(string com, int pr, double ra, string us):Phone(com, pr, ra) //inheriting attribute values from parent class constructor
   {
     manuf=com;  //assigning all attribute values, inherited a.w.a created
     price=pr;
     rating=ra;
     use=us;
  }


};
int main()
{
    Phone p2("Apple", 120000, 4.7);
    Laptop l1("Dell", 68000, 3.5, "mixed");
    Phone p4("Redmi", 50000, 3.8);

    cout<<l1.manuf<<endl;
    cout<<p2.Buy()<<endl;
    cout<<l1.use<<endl;
   cout<<p2.manuf<<endl;
   cout<<l1.Buy()<<endl;

    return 0;
}

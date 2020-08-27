
#include<iostream>
using namespace std;


class Phone   //declaring a class
    {
    public:  // declaring attributes of objects of this class
        string manuf;
        int price;
        double rating;

    Phone() //constructor without arguments
    {
        manuf = "no manufacturer entered";
        price = 0;
        rating = 0.0;
    }

    Phone(string M, int P, double R) //constructor with arguments used to easily assign attribute values to the objects
    {
        manuf = M;
        rating = R;
        price = P;
    }
    };

int main()
{
    Phone p1; //making objects of class Phone

    Phone p2("Apple", 120000, 4.7);


    cout<<p2.rating<<endl;
    cout<<p2.manuf<<endl;
    cout<<p2.price<<endl;
    cout<<p1.manuf<<endl;
    cout<<p1.rating<<endl;

    return 0;
}

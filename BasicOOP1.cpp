#include<iostream>
using namespace std;


class Phone   //declaring a class
    {
    public:  // declaring attributes of objects of this class
        string manuf;
        int price;
        double rating;
    };

int main()
{
    Phone p1; //making objects of class Phone
    p1.manuf = "Realme"; //defining object attributes of class Phone
    p1.price = 8000;
    p1.rating = 4.2;

    Phone p2;
    p2.manuf = "Apple";
    p2.price = 120000;
    p2.rating = 4.7;

    cout<<p2.rating<<endl;
    cout<<p1.manuf<<endl;
    cout<<p2.price<<endl;


    return 0;
}

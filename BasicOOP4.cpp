#include<iostream>
using namespace std;


class Phone   //declaring a class
    {
    private:   //private attributes can only be accessed inside the class and not from any outside function
        double rating;  //making an attribute private lets us control the value of the attribute


    public:  // declaring attributes of objects of this class
        string manuf;
        int price;

    Phone() //constructor without arguments
    {
        manuf = "no manufacturer entered";
        price = 0;
        rating = 0.0;
    }

    Phone(string M, int P, double R) //constructor with arguments used to easily assign attribute values to the objects
    {
        manuf = M;
        setRating(R);
        price = P;
    }

    void setRating(double R)   //setter used to the set the attrib. value as it cant be accessed directly outside the class
    {
     if(R <= 0 || R <= 5)
     {
         rating = R;
     }
     else{
        rating = 0;
     }
    }


    double getRating()    //getter used to get the attrib. as it cant be accessed outside the class
    {
        return rating;
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

int main()
{
    Phone p1; //making objects of class Phone

    Phone p2("Apple", 120000, 4.7);
    Phone p3("Realme", 10000, 4.3);
    Phone p4("Redmi", 50000, 3.8);

    p4.setRating(3.7); //using setters
    p3.setRating(5.1);
    cout<<p2.getRating()<<endl;
    cout<<p2.manuf<<endl;
    cout<<p1.manuf<<endl;
    cout<<p1.getRating()<<endl; //using getters
    cout<<p2.Buy()<<endl;  //calling an object method or object function
    cout<<p4.getRating()<<endl;
    cout<<p4.Buy();

    return 0;
}

#include<iostream>

using namespace std;

class booth
{
public:
    booth()
    {
     message = "Constructor";
    }
private:
    string message;
    void print_message()
    {
        cout<<message;
    }
friend void FriendFunction(booth obj); //prototyping the friend function inside the class
};

void FriendFunction(booth obj) //the function
{
    obj.print_message(); //accessing the private member of the class
}

int main()
{
    booth b1;
    FriendFunction(b1); //calling FriendFunction with class object as input

return 0;
}

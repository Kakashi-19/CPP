#include<iostream>

using namespace std;

void print_id(string name, int age, double percent, char sign);
//if we would have defined print_id before main(),the there was no need to call it.



int main()
{
    // we have to declare the var types because we are taking input here

    int age;
    string name;
    double percent;
    char sign;
    cout<< "Please enter your Name" << endl;
    getline(cin, name); //using getline to take full string input including spaces
    cout << "Please enter your Age"<< endl;
    cin >> age;
    cout << "please enter your percentage"<< endl;
    cin >> percent;
    cout << "Please enter your batch sign" << endl;
    cin >> sign;
    print_id(name, age, percent, sign);

    print_id("Saurabh" , 21, 99.98, '*');
    // here we didn't define input types coz they are already defined in the function print_id

}


void print_id(string name, int age,double  percent,char  sign)
{
    cout<<"  YOUR ID    "<< endl;
    cout << "Name : "<< name << endl;
    cout << "Age : "<< age << endl;
    cout << "Percentage : "<< percent << endl;
    cout << "Batch Sign : "<< sign<< endl;
}

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int age;
    string name;
    double percent;
    char sign;

    cout<< "Please enter your Name" << endl;
    getline(cin, name);
    cout << "Please enter your Age"<< endl;
    cin >> age;
    cout << "please enter your percentage"<< endl;
    cin >> percent;
    cout << "Please enter your batch sign" << endl;
    cin >> sign;
    cout<<"  YOUR ID    "<< endl;
    cout << "Name : "<< name << endl;
    cout << "Age : "<< age << endl;
    cout << "Percentage : "<< percent << endl;
    cout << "Batch Sign : "<< sign<< endl;

    return 0;

}

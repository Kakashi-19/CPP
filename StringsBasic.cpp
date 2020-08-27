//Working with string
#include<iostream>

using namespace std;
int main()
{
    string str = "String Methods or functions";
    cout<< "this string is "<< str.length() << " characters long"<< endl;
    cout<< "the character at index 5 is "<< str[5] << endl;
    cout<< "the string Methods is at index " << str.find("Methods", 0)<< endl;
    cout<< "the characters from index 7 to 14 are "<< str.substr(7, 7);

    return 0;

}

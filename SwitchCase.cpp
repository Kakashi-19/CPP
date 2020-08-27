#include<iostream>

using namespace std;

string getdayName(int dayNum)
{
    string dayName;
    switch(dayNum)
    {
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    case 7:
        dayName = "Sunday";
        break;
    default :
        return "Invalid Day Number";
    }
    return dayName;
}

int main()
{
    int dayNum;
    cout<<"Enter Day Number : ";
    cin>> dayNum;
    cout<< getdayName(dayNum);

    return 0;
}






















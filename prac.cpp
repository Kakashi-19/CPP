#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num, a;
    srand(time(0));
    a = 1 + (rand() % 9);
    cout<<"Guess a number between 1 to 9 : ";
    cin >> num;
    for(int i=1; i<3; i++)
    {
        cout<<"Guess a number between 1 to 9 : ";
        cin >> num;
        if(num == a)
        {
            cout<<"Hooray! You guessed the secret number ";
            return 0;
        }
    }

    cout<<"Oops! You are out of turns \nThe secret number was "<< a;
    return 0;
}

#include<iostream>
#include<cstdlib> //contains rand()and srand()
#include<ctime> //contains time()
using namespace std;

int main()
{
    int num, a;
    srand(time(0)); //the value of time(0) always keeps changing so we are always seeding a different number through srand()
    a = 1 + (rand() % 9); //{ a +(rand() % (b-a+1)) } formula for random number in range [a, b]
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

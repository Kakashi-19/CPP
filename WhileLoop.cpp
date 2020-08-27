#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int Guess, secretNum, guessCount;
    secretNum = 7;


    cout<<"Enter Your Guess (1 to 9): "<< endl;
    cin>>Guess;
    while (Guess != secretNum)
    {
        cout<<"Wrong guess. Try Again ."<< endl;
        cin>>Guess;
        guessCount++;
        if(guessCount == 2){
            cout<< "You are Out of Guesses.";
            return 0;
        }

    }
    cout<<"Congrats! You guessed the secret number";
return 0;
}
 //In do while the code executes first before checking the condition

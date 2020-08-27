#include<iostream>

using namespace std;

double calculate(double n1, double  n2,char  op);

int main()
{
    double n1, n2;
    char op;

    cout<< "Enter a number : " << endl;
    cin>> n1;

    cout<< "Enter another number : " << endl;
    cin>> n2;

    cout<< "Enter an Operator : " << endl;
    cin>> op;

    calculate(n1,n2, op);

 return 0;
}


double calculate(double n1, double n2,char  op)
{
    if(op == '+'){
      cout<< n1 + n2;
    }
    else if(op == '-'){
        cout << n1 - n2;
    }
    else if(op == '/'){
        cout<< n1 / n2;
    }
    else if(op == '*'){
        cout<< n1 * n2;
    }
    else{
        cout<< "Invalid Operator" << endl;

    }
return 0;
}

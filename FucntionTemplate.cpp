#include<iostream>
using namespace std;

template <class t1, class t2> //creating template for two generic data types
t1 bigger(t1 a, t2 b) //template helps us to make a generic data type
{
    return (a>b?a:b); //if a>b then a else b  (if ? then : else);
}

int main()
{
    cout<<bigger(48.5, 48);  //according to the input t1 = int ; t2 = double

    return 0;
}

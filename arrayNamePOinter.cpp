#include<iostream>
using namespace std;

int main()
{
    int ar[5] = {10,20,30,40,50};
    int *p = &ar[2];
cout<<"Pointer arithemetic in arrays"<<endl;
cout<<*(p-2) <<endl; //ar[0]
cout<<*(p-1) <<endl;
cout<<*(p) <<endl; //ar[2]
cout<<*(p+1) <<endl;
cout<<*(p+2) <<endl;//ar[5]
cout<<""<<endl;
cout<<"Array name as Pointer to first element of that array"
cout<<*(ar) <<endl; //ar[0]
cout<<*(ar+1) <<endl;
cout<<*(ar+2) <<endl;
cout<<*(ar+3) <<endl;
cout<<*(ar+4) <<endl; //ar[4]

return 0;
}

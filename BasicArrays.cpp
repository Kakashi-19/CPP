#include<iostream>
 using namespace std;

 int main()
 {
     int ar1[] = {1, 4, 5, 6, 10, 22}, ar2[10];

     cout<< ar1[4] <<endl;
     ar2[4] = ar1[3];
     cout<< ar2[4];

     return 0;
 }

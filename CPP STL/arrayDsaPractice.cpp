#include"iostream"
#include"string"

using namespace std;

int main()
{
    int first, next;
    char ch;
    int i = 1 ;
    int len;

    cout<<"Enter first element of the array: ";
    cin>>first;
    int *pfirst = &first;
    while (ch != 'n')
    {
    cout<<"Enter next element of the array: ";
    cin>>next;
    int *pfirst = &first;
    cout<<i<<endl;
    *(pfirst + i) =  next;
    cout << *(pfirst + i) <<endl;  //this sometimes throw a garbage value as there might be another variable stored at the address we are asking for
    i++;         //to avoid this error we have to use malloc() to store a fix a memory for our values
    len = i;
    cout<<"wanna add another element to the array (y/n): ";
    cin>>ch;
    }


   /* for(int j = 0; j < len; j++)
    {
        cout<<*(pfirst + j)<<endl;
    }
    */


}


#include<iostream>
#include<fstream>  //This is the header file for dealing with files
using namespace std;

int main()
{


    ifstream file1("StudentsRead.txt"); //to read data from a file we have to create an ifstream object instead of an ofstream object
    if(file1.is_open())     //check if the file is associated with any file or not
    {
        cout<<"File Opened successfully\n";

    int section, id;
    string name;
        while(file1>> name >> id >> section) //syntax to read data from custom file structure
        {

            cout<<"Name : "<<name<< " Enrollment : "<< id <<" Section : "<< section<<endl;

        }
    }
    else
    {
        cout<<"File not Open";
    }
    //file1.close();   no need to manually close the file as the deconstructor will automatically close the file once the file object is deleted or the program ends

}

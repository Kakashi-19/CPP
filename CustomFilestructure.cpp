
#include<iostream>
#include<fstream>  ///This is the header file for dealing with files
using namespace std;

int main()
{


    ofstream file1("StudentsWrite.txt"); ///or u can write ofstream file1; //if there is no file of that name it will automatically create one
                                    ///file1.open(""filesNotes.txt); i.e the constructor is optional
    if(file1.is_open())     ///check if the file is associated with any file or not
    {
        cout<<"File Opened successfully\n";
        cout<<"Enter details as Name Enrollment Section\nPress ctrl + z when you're done"<<endl;

    int section, id;
    string name;
        while(cin>> name >> id >> section)
        {
            file1 <<"Name : "<<name<< " Enrollment : "<< id <<" Section : "<< section<<endl;
        }
    }
    else
    {
        cout<<"File not Open";
    }
    //file1.close();   no need to manually close the file as the deconstructor will automatically close the file once the file object is deleted or the program ends

}

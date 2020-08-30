#include<iostream>
#include<fstream>  ///This is the header file for dealing with files
using namespace std;

int main()
{
    ofstream file1("filesNotes.txt"); ///or u can write ofstream file1; //if there is no file of that name it will automatically create one
                                    ///file1.open(""filesNotes.txt); i.e the constructor is optional
    if(file1.is_open())     ///check if the file is associated with any file or not
    {
        cout<<"File Opened successfully";
    }
    else
    {
        cout<<"File not open";
    }

    file1 << "This is a check for files.cpp\n";  ///adding text to the text file
    file1.close();    ///closing the file and clearing the memory

}

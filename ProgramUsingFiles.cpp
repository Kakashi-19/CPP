#include<iostream>
#include<fstream>

using namespace std;

void display(int x);
int choice();

int main()
{
    int c =choice();
    while (c != 4)
    {
        display(c);
        c = choice();

    }
  return 0;
}

int choice()
{
    int ch;
    cout<< "******Online Class Sections******" <<endl;
    cout<<"1. Section 1 Students"<<endl;
    cout<<"2. Section 2 Students"<<endl;
    cout<<"3. Section 3 Students"<<endl;
    cout<<"4. Exit"<<endl;

    cin>>ch;
    return ch;

}

void display(int x)
{
    ifstream file1("material.txt");
    int id, section;
    string name;
    switch(x)
    {
    case 1:
        cout<<"**Section 1 students**"<<endl;
        while(file1>>name>>id>>section)
        {
            if(section == 1)
            {
                cout<<"Name : "<<name<<" ID: "<<id<<endl;
            }
        }
        break;
    case 2:
        cout<<"**Section 2 students**"<<endl;
        while(file1>>name>>id>>section)
        {
            if(section == 2)
            {
                cout<<"Name : "<<name<<" ID: "<<id<<endl;
            }
        }
        break;
    case 3:
        cout<<"**Section 3 students**"<<endl;
        while(file1>>name>>id>>section)
        {
            if(section == 3)
            {
                cout<<"Name : "<<name<<" ID: "<<id<<endl;
            }
        }
        break;


    }
}

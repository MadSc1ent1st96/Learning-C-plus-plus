#include<iostream> 

using namespace std; 

class Employee{
    int id;
    int salary;
    public:
        void setid(void){
            salary = 122;
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }
        void getid(void){
            
            cout<<"The id of this employee is "<<id<<" with salary "<< salary<<endl;
        }
};

int main() {
    // Employee a, ab, abc;
    // a.setid();
    // a.getid();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    cout<< fb;

    return 0; 

}
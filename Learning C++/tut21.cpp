#include<iostream> 

using namespace std; 

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);  // Declaration
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            }
};

void Employee :: setdata(int a1, int b1, int c1){ 
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee abc;
    abc.setdata(1, 2, 3); 
    abc.d = 4;
    abc.e = 5;
    abc.getdata();
    cout<<endl<<abc.e;

    return 0; 

}
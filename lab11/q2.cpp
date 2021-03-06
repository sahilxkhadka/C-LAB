//(2) Write a program using exception handling in which an object type is thrown.  
#include<iostream>
using namespace std;

class Divider {
    private:
        int numerator, denominator;
    public:
        void setData() {
            cout<<"Enter the value of numerator and denominator:"<<endl;
            cin>>numerator>>denominator;
        }
        bool calculate() {
            if(denominator)
                return true;
            return false;
        }
        void display() {
            cout<<"The value of divison = "<<numerator /(float) denominator;
        }
        void displayError() {
            cout<<"Cannot divide "<<numerator<<" by "<<denominator<<endl;
        }
};

int main (){
    Divider div1;
    div1.setData();
    try {
        if(div1.calculate())
            div1.display();
        else
            throw div1;
    }
    catch (Divider x) {
        x.displayError();
    }  
    return 0;
}

// Output 
// Enter the value of numerator and denominator:
// 5
// 4
// The value of divison = 1.25
// Enter the value of numerator and denominator:
// 6
// 0
// Cannot divide 6 by 0

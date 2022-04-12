//(2) Write a program using exception handling in which an object type is thrown.  
#include<iostream>
using namespace std;

class Divider {
    private:
        int numertaor, denominatior;
        float result;
    public:
        void setData() {
            cout<<"Enter the value of numerator and denominator:"<<endl;
            cin>>numertaor>>denominatior;
        }
        bool calculate() {
            result =  numertaor /(float) denominatior;
            if(denominatior)
                return true;
            else 
                return false;
        }
        void display() {
            cout<<"The value of divison = "<<result;
        }
        void displayError() {
            cout<<"Cannot divide "<<numertaor<<" by "<<denominatior<<endl;
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
//  Write a program that overloads the binary arithmetic '/' operator using a friend function.
#include<iostream>
using namespace std;

class Number {
    private:
        float x;
    public: 
        Number(float x) {
            this->x = x;
        }
        friend float operator / (Number, Number);
        void display() {
            cout<<"The value of x = "<<x<<endl;
        }
};

float operator / (Number n1, Number n2) {
    return n1.x / n2.x;
}

int main (){
    Number num1(9), num2(5);
    float res = num1 / num2;
    Number num3(res);
    num3.display();
    return 0;
}

// output
// The value of x = 1.8 
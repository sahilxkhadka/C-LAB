//Write a program to demonstrate a catch block which catches all exceptions. 
#include<iostream>
#include<cmath>
using namespace std;

void calcRoot(int x) {
    cout<<"The square root of "<<x<<" is "<<sqrt(x);
}
int main (){
    int num;
    cout<<"Enter the number whose square root is to be calculated:"<<endl;
    cin>>num;
    try {
        num < 0 ? throw num : calcRoot(num);
    }
    catch (int x) {
        cout<<"Cannot calculate the root of a negative number."<<endl;
    }
    return 0;
}

// Output 
// Enter the number whose square root is to be calculated:
// 9
// The square root of 9 is 3
// Enter the number whose square root is to be calculated:
// -9
// Cannot calculate the root of a negative number.

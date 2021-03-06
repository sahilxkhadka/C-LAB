// Write a program to find the sum of 1 - (22/2!) + (32/3!) - (42/4!) + (52/5!) - ..... (n2/n!). [Use recursion for the factorial part].

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int factorial(int x) {
  return (x > 1) ? x * factorial(x - 1) : 1;
}

int main (){
  int n;
  float res = 0, instantValue;
  cout<<"Enter the value of n upto which you want the series to be printed."<<endl;
  cin>>n;
  for (int i = 1; i <= n ; i++) {
    instantValue = (float)pow(i, 2)/ factorial(i);
    (i % 2 == 0) ? res -= instantValue : res += instantValue;
  }
  cout<<"The result is: "<<setprecision(3)<<res;
  return 0;
}


// Output 
// Enter the value of n upto which you want the series to be printed.
// 5
// The result is: 0.0417
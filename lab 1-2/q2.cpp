#include<iostream>
using namespace std;

int fibonacci(int x) {
  if (x <= 2) {
    return x -1 ;
  }
  return (fibonacci(x - 1) + fibonacci(x-2));
}

int main (){
  int n, result;
  cout<<"Enter a number upto which you want the sereis:"<<endl;
  cin>>n;
  cout<<"The nth fibonacii number is: "<<fibonacci(n);
  return 0;
}

// Output 
// Enter a number upto which yu=ou want the sereis:
// 6
// The nth fibonacii number is: 5
#include<iostream>

using namespace std;

int multiply(int x, int y, int z) {
  cout<<"Integer function called";
  return x * y * z;
}
float multiply(float a, float b, float c) {
  cout<<"Float function called";
  return a * b * c;
}

int main (){
  float x, y, z, floatProduct;
  cout<<"Enter three integer values: "<<endl;
  cin>>x>>y>>z;
  int intProduct = multiply((int)x, (int)y, (int)z);
  cout<<"Now enter float values: "<<endl;
  cin>>x>>y>>z;
  floatProduct = multiply(x, y,z);
  cout<<"The product of integers = "<<intProduct<<endl
      <<"The product of floats = "<<floatProduct<<endl;
  return 0;
}
// Output 
// Enter three integer values: 
// 6 1 9
// Integer function calledNow enter float values: 
// 6.9 7.9 8.9
// Float function calledThe product of integers = 54
// The product of floats = 485.139
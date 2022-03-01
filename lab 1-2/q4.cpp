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
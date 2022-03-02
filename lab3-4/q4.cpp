#include<iostream>
using namespace std;

class Complex {
  int real;
  int img;
  public:
    void setData();
    void calcData(Complex, Complex);
};
void Complex :: setData() {
  cout<<"Enter the real and imaginary part:"<<endl;
  cin>>real>>img;
}
void Complex :: calcData(Complex c1, Complex c2) {
  real = c1.real + c2.real;
  img = c1.img + c2.img;
  cout<<c1.real<<" + "<<c1.img<< "i + "<<c2.real<<" + "<<c2.img<< "i = "
      <<real<<" + "<<img<<"i"<<endl;
  real = c1.real - c2.real;
  img = c1.img - c2.img;
  cout<<c1.real<<" + "<<c1.img<< "i - ("<<c2.real<<" + "<<c2.img<<"i) = "
      <<real<<" + ("<<img<<"i)"<<endl;
}

int main (){
  Complex num1, num2, num3;
  num1.setData();
  num2.setData();
  num3.calcData(num1, num2);
  return 0;
}

// Output 
// Enter the real and imaginary part:
// 1 2
// Enter the real and imaginary part:
// 3 4
// 1 + 2i + 3 + 4i = 4 + 6i
// 1 + 2i - (3 + 4i) = -2 + (-2i)
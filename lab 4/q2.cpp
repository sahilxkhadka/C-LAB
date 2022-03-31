// Create a constructor to initiate any private data member. Later overload it to set different type of data member. Your program must also include a destructor. 

#include<iostream>
using namespace std;

class Equation {
  int a, b, c;
  public: 
    Equation() {
      a = 0;
      b = 0;
      c = 0;
    }
    Equation (int x, int y, int z) {
      a = x;
      b = y;
      c = z;
    }
    void displayData() {
      cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
    }
    ~Equation() {}
};

int main (){
  Equation e1, e2(1, 2, 3);
  e1.displayData();
  e2.displayData();
  return 0;
}

// Output
// a = 0 b = 0 c = 0
// a = 1 b = 2 c = 3
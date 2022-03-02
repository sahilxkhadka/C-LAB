#include<iostream>
using namespace std;

int main (){
  int marks;
  cout<<"Enter the marks you obtained in c++";
  cin>>marks;
  cout<<"You have obtained: ";
  if (marks <= 59)
    cout<<"F";
  else if (marks <= 69)
    cout<<"D";
  else if (marks <= 79)
    cout<<"C";
  else if (marks <= 89)
    cout<<"B";
  else if (marks <= 100)
    cout<<"A";
  else 
    cout<<"Out of range!!!";
  return 0;
}

// Output 
// Enter the marks you obtained in c++ 69
// You have obtained: D
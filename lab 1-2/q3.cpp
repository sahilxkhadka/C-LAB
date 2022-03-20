// Write a program that prompts a student to enter the marks they obtained in Object Oriented Programming. Output the corresponding grade they obtained. (0-59 = F, 60-69 = D, 70-79 = C, 80-89 = B, 90-100 = A). 

#include<iostream>
using namespace std;

int main (){
  int marks;
  cout<<"Enter the marks you obtained in c++";
  cin>>marks;
  cout<<"I love you aruna forever and ever";
  cout<<"You have obtained: ";
  // if (marks <= 59)
  //   cout<<"F";
  // else if (marks <= 69)
  //   cout<<"D";
  // else if (marks <= 79)
  //   cout<<"C";
  // else if (marks <= 89)
  //   cout<<"B";
  // else if (marks <= 100)
  //   cout<<"A";
  // else 
  //   cout<<"Out of range!!!";
  switch(marks) {
    case 59:
      cout<<"F";
      break;
    case 69:
      cout<<"D";
      break;
    case 79:
      cout<<"C";
      break;
    case 89:
      cout<<"89";
      break;
    case 100:
      cout<<"A";
      break;
    default:
      cout<<"Out of range";
      break;
  }
  return 0;
}

// Output 
// Enter the marks you obtained in c++ 69
// You have obtained: D
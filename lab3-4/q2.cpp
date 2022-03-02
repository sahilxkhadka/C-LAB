#include<iostream>
using namespace std;
struct Pharma {
  int companyId;
  string name;
  struct Employee {
    int empId, isHead, headCount = 0;
  } emp[5];
}dept[3];
void getData() {
  int i, j;
  for (i = 0; i < 3; i++) {
    cout<<endl<<"Enter the id of your company:"<<endl;
    cin>>dept[i].companyId;
    cout<<"Enter the name of your company:"<<endl;
    getline(cin>>ws,dept[i].name);
    for (j = 0; j < 5; j++) {
      cout<<"Enter the id of the employee:"<<endl;
      cin>>dept[i].emp[j].empId;
      cout<<"Is he the head of the department?"<<endl;
      cin>>dept[i].emp[j].isHead;
      if (dept[i].emp[j].isHead == 1)
        break;
    }
    for (int k = j + 1; k < 5; k++) {
      cout<<"Enter the id of the employee:"<<endl;
      cin>>dept[i].emp[k].empId;
      dept[i].emp[k].isHead = 0;
    }
  }
} 
void displayData() {
  int i, j;
  for (i = 0; i < 3; i++) {
    cout<<endl<<"The company id = "<<dept[i].companyId<<endl
        <<"Company Name = "<<dept[i].name<<endl<<endl;
    for ( j = 0; j < 5; j++) {
      if (dept[i].emp[j].isHead == 1) {
        cout<<"Employee id of the head = "<<dept[i].emp[j].empId<<endl;
        break;
      }
    }
    if (j == 5) 
      cout<<"No department head"<<endl;
  }
}
int main (){
  getData();
  displayData();
  return 0;
}

// Output 
// Enter the id of your company:
// 101
// Enter the name of your company:
// Sahil
// Enter the id of the employee:
// 1
// Is he the head of the department?
// 1
// Enter the id of the employee:
// 2
// Enter the id of the employee:
// 3
// Enter the id of the employee:
// 4
// Enter the id of the employee:
// 5

// The company id = 101
// Company Name = Sahil

// Employee id of the head = 1
// Create a structure for a pharmaceutical company having three departments. Each department can have a maximum of 5 employees, out of which one is a department head. Input as well as display the information of the departments’ employees. [Use nested structure] 

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
  int i = 0, j = 0;
  for (i = 0; i < 2; i++) {
    cout<<"Enter the id of your company:"<<endl;
    cin>>dept[i].companyId;
    cout<<"Enter the name of your company:"<<endl;
    getline(cin>>ws,dept[i].name);
    for (j = 0; j < 2; j++) {
      cout<<"Enter the id of the employee:"<<endl;
      cin>>dept[i].emp[j].empId;
      cout<<"Is he the head of the department?"<<endl;
      cin>>dept[i].emp[j].isHead;
      if (dept[i].emp[j].isHead == 1)
        break;
    }
    for (int k = j + 1; k < 2; k++) {
      cout<<"Enter the id of the employee:"<<endl;
      cin>>dept[i].emp[k].empId;
      dept[i].emp[k].isHead = 0;
    }
  }
} 
void displayData() {
  for (int i = 0; i < 2; i++) {
    cout<<endl<<"The company id = "<<dept[i].companyId<<endl
        <<"Company Name = "<<dept[i].name<<endl<<endl;
    for (int j = 0; j < 2; j++) {
      cout<<"Employee Id = "<<dept[i].emp[j].empId<<endl
          <<"Departmend Head Status = "<<dept[i].emp[j].isHead<<endl<<endl;
    }
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
// Enter the id of your company:
// 102

// The company id = 101
// Company Name = Sahil
// Employee Id = 1
// Departmend Head Status = 1
// Employee Id = 2
// Departmend Head Status = 0
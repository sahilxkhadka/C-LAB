#include<iostream>
using namespace std;

int main (){
    int weight, age, exp;
    cout<<"Enter your weight, age and experience:"<<endl;
    cin>>weight>>age>>exp;
    if (weight >= 50 && (age>18 && age < 24))
      cout<<"You are qualified for the job"<<endl;
    else if (exp > 4 && weight == 35) {
      (age > 24) ? cout<<"You are qualified" : cout<<"Not qualified";
    }
    else 
      cout<<"You are not qualified."<<endl;
  return 0;
}

// Output 
// Enter your weight, age and experience:
// 35
// 25
// 5
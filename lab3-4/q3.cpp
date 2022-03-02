#include<iostream>
using namespace std;

class AccountHolder {
  int account_no;
  string account_holder_name;
  float balance;
  public:
    void setData() {
      cout<<"Enter acc number:"<<endl;
      cin>>account_no;
      cout<<"Enter acc holder name:"<<endl;
      getline(cin>>ws, account_holder_name);
      cout<<"Enter the balance in your account:"<<endl;
      cin>>balance;
    }
    void getData() {
      cout<<"Account No.: "<<account_no<<endl
          <<"Account holder name: "<<account_holder_name<<endl
          <<"Balance: "<<balance<<endl<<endl;
    }
};

int main (){
  AccountHolder ebl[3];
  for (int i = 0; i < 3; i++) 
    ebl[i].setData();
  for (int i = 0; i < 3; i++)
    ebl[i].getData();
  return 0;
}

// Output 
// Enter acc number:
// 66
// Enter acc holder name:
// Sandesh
// Enter the balance in your account:
// 0.00

// Account No.: 66
// Account holder name: Sandesh
// Balance: 0
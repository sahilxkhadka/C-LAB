#include <iostream>
using namespace std;

class Transactions{
	float balance, depositAmount, withdrawAmount;
	static int count;		
	public:
		void depositMoney() {
		cout << "Enter the amount of money you want to deposit:" << endl;
		cin >> depositAmount;
		count++;
		}
		void withdrawMoney(){
			do {
				cout << "Enter the amount of money you want to withdraw:" << endl;
				cin >> withdrawAmount;
			} while (depositAmount < withdrawAmount);
			balance = depositAmount - withdrawAmount;
			count++;
	}
	void displayBalance() {
		cout << "Your Balance = " << balance;
	}
	void displayTransactions() {
		cout << "The total no. of transactions done today = " << count << endl;
	}
};
int Transactions::count;

int main() {
	Transactions user[3];
	for (int i = 0; i < 3; i++) {
		int activeUser = 1, menu;
		cout<<"Greetings to our valued user 00"<<i + 1;
		do {
			cout << "Enter the number of transaction you want to perform as seen in the menu" << endl;
			cin >> menu;
			switch (menu) {
				case 1:
					user[i].depositMoney();
					break;
				case 2:
					user[i].withdrawMoney();
					break;
				case 3:
					user[i].displayBalance();
					break;
				case 4:
					user[i].displayTransactions();
					break;
				case 5:
					activeUser = 0;
				default:
					break;
			} 
		}while(activeUser == 1);
	}
	return 0;
}
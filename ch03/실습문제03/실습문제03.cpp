#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int b);
	string getOwner();
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
};

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

string Account::getOwner() {
	return name;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	balance -= money;
	return money;
}

int Account::inquiry() {
	return balance;
}

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	return 0;
}
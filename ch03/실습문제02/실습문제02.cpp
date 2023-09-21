#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d);
	Date(string bd);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

Date::Date(string bd) {
	string stry, strm, strd;
	int i;

	for (i = 0; bd[i] != '/'; i++) {
		stry += bd[i];
	}
	for (i = i + 1; bd[i] != '/'; i++) {
		strm += bd[i];
	}
	for (i = i + 1; i < bd.length(); i++) {
		strd += bd[i];
	}

	year = stoi(stry);
	month = stoi(strm);
	day = stoi(strd);
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945 / 8 / 15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
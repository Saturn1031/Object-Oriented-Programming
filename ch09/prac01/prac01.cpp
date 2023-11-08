#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDallar :public Converter {
public:
	WonToDallar(double ratio) : Converter(ratio) {};
	virtual double convert(double src);
	virtual string getSourceString();
	virtual string getDestString();
};

double WonToDallar::convert(double src) {
	return src / ratio;
}

string WonToDallar::getSourceString() {
	return "��";
}

string WonToDallar::getDestString() {
	return "�޷�";
}

int main() {
	WonToDallar wd(1010);
	wd.run();
}
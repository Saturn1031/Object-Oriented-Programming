#ifndef GAMER
#define GAMER

class Gamer {
protected:
	int num[3];
public:
	virtual void setNum(int n1, int n2, int n3) = 0;
	virtual int* getNum() = 0;
};

#endif // !GAMER
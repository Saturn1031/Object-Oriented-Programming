#ifndef HUMAN
#define HUMAN
#include "Gamer.h"

class Human : public Gamer {
public:
	void setNum(int n1, int n2, int n3);
	int* getNum();
	void guessNum();
};

#endif // !HUMAN

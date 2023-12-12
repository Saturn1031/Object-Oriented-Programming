#ifndef PC
#define PC
#include "Gamer.h"

class Pc : public Gamer {
public:
	void setNum(int n1, int n2, int n3);
	int* getNum();
	void setRandomNum();
};

#endif // !PC

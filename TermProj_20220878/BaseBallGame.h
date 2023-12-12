#ifndef BASEBALLGAME
#define BASEBALLGAME
#include "Human.h"
#include "Pc.h"

class BaseBallGame {
	Pc pc;
	Human user;
public:
	void run();
	void explainGame();
	bool compareNum(int* pcN, int* userN);
};

#endif // !BASEBALLGAME

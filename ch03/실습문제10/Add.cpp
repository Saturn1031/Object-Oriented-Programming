#include "Add.h"

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calculator() {
	return a + b;
}
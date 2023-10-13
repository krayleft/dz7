#include "add.h"

int add(int a, int b, bool c) {
	int result = 0;
	if (c) {
		result = a * b;
	}
	else { result = a + b; }
	return result;
}

#include "Functions.h"

#define X 1
#define MODE(X) ((X) == 0 ? Mode_0() : ((X) == 1 ? Mode_1(Add()) :  Mode_()))

int main() {
	setlocale(LC_ALL, "Rus");

	MODE(X);

	return 0;
};
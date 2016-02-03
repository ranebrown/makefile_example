#include <stdio.h>
#include "sum.h"

int main() {
	int x = sum(2,5);
	int y = mult(2,5);
	printf("sum: %d\n",x);
	printf("mult: %d\n",y);
	return 0;
}

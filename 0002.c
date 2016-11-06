#include <stdio.h>

int main (void) {
	
	int limit;
	int a;
	int b;
	int c;
	int sum;

	limit = 4000000;
	a = 1;
	b = 1;
	c = 0;
	sum = 0;

	while (c <= limit) {
		c = a + b;
		if (c % 2 == 0) {
			sum = sum + c;
		}

		a = b;
		b = c;
	}

	printf("The sum we have been looking for is equal to %d.\n", sum);
}
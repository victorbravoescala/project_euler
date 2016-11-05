#include <stdio.h>

int main (void) {
	
	int i;
	int n;
	int r;
	int s;
	int sum;

	n = 1000;
	r = 3;
	s = 5;
	sum = 0;

	for (i = 3; i < n; i++) {
		if ((i % r == 0) || (i % s == 0)) {
			sum = sum + i;
		}
	}

	printf("The sum we have been looking for is equal to %d.\n", sum);
}
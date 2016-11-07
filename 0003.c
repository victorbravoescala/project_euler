#include <stdio.h>
#include <stdlib.h>

int isPrime(q)
{
	int i;
	int result;

	i = 2;
	result = 1;

	while (i < q) {
		if (q % i == 0) {
			result = 0;
		}
		i++;
	}

	return result;
}

int main (void) {
	long p;
	long q;
	int result;

	p = 600851475143;
	q = (p + 1) / 2;

	while (q != 0) {
		if (p % q == 0) {
			printf("%ld is a divisor of %ld.\n", q, p);
			result = isPrime(q);
		}
		if (result == 1) {
			printf("The number we have been looking for is %ld.\n", q);
			exit(1);
		}
		q--;
	}

	printf("%ld has any prime factor.\n", p);
}

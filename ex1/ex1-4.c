#include <stdio.h>

/* Why are you reading this */
int main(void) {
	float fahr, celsius;
	float min, max, step;

	min = 0;
	max = 300;
	step = 20;

	celsius = min;

	printf("Printing Temperature table...\n");
	printf("%3c %6c\n", 'C', 'F');

	while (celsius <= max) {
		fahr = (celsius + (160.0/9.0)) * (9.0/5.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius+=step;
	}

	return 0;
}

#include <stdio.h>

int main(void) {
	float fahr, celsius;

	float min, max, step;

	min = 0;
	max = 300;
	step = 20;

	printf("Temperature chart...\n");
	printf("%3c %6c\n", 'F', 'C');
	for(fahr = min; fahr <= max; fahr+=step) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}

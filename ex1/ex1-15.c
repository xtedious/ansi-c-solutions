#include <stdio.h>

#define	MIN	0	// minimum value of the temperature
#define MAX	300	// maximum value of the temperature
#define	STEP	20	// step increments of the temperature chart

// Convert fahr to celsius
float f2c_conv(int f);

int main(void) {
	float fahr, celsius;

	fahr = MIN;

	printf("Printing Temperature Table ...\n");
	printf("%3c %6c\n", 'F', 'C');

	while (fahr <= MAX) {
		celsius = f2c_conv(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += STEP;
	}
}

float f2c_conv(int f) {
	return (5.0/9.0) * (f-32.0);
}

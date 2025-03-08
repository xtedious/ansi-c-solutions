#include <stdio.h>

int main(void) {
	int c;

	unsigned int spaces = 0;

	while ((c = getchar()) != EOF) {
		if ((c == ' ' || c == '\n' || c == '\t') && (spaces >= 1))
			continue;

		if ((c == ' ') || (c == '\n') || (c == '\t')) {
			++spaces;
			putchar('\n');
			continue;
		}

		putchar('#');
		spaces = 0;
	}


	return 0;
}

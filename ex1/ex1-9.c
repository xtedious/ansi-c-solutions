#include <stdio.h>

int main(void) {
	int c;

	unsigned int spaces = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++spaces;
			if (spaces >= 2)
				continue;
		}
		else if (c != ' ')
			spaces = 0;

		putchar(c);
	}

	return 0;
}

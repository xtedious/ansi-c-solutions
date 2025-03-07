#include <stdio.h>

int main(void) {
	int newline, tab, blanks;

	// Character pointer for input stream
	int c;

	newline = 0;
	tab = 0;
	blanks = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++newline;
		else if (c == '\t')
			++tab;
		else if (c == ' ')
			++blanks;
	}

	printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", newline, tab, blanks);

	return 0;
}

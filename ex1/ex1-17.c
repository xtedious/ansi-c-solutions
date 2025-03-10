#include <stdio.h>

#define MINLINE		30	// minimum amount of characters in a line to be printed
#define MAXLINE		1000	// maximum amount of characters in a line
#define MAXSTR		1000	// maximum amount of sentences in our program

int getLine(char str[]);

int main(void) {

	int len = 0;		// the current line length
	int x = 0;		// storage of our sentence array

	char str[MAXLINE];
	char str_ar[MAXSTR][MAXLINE];

	while ((len = getLine(str)) > 0) {
		if (len > (MINLINE - 1)) {
			for(int j = 0; j < len; ++j) {
				str_ar[x][j] = str[j];
			}
			++x;
		}
	}
	printf("\n=These are all sentences that are more than %d characters long=\n", MINLINE);

	for (int i = 0; i < x; ++i) {
		printf("%s", str_ar[i]);
	}

	return 0;
}

int getLine(char s[]) {
	int c;

	int i = 0;

	while ((c = getchar()) != EOF && c != '\n') {
		if (i >= MAXLINE) {
			return -1;
		}
		s[i] = c;
		++i;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

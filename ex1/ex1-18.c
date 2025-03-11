#include <stdio.h>

#define MAXLINE		1000	// maximum amount of characters in a line
#define MAXSTR		1000	// maximum amount of sentences that can be processed

int computeLine(char str[]);

int main(void) {

	int len = 0;			// current line length
	
	char str[MAXLINE];		// current line
	char str_ar[MAXSTR][MAXLINE];	// input lines
	int x = 0;			// line number pointer
	
	while ((len = computeLine(str))) {
		for(int i = 0; i < len; ++i) {
			str_ar[x][i] = str[i];
		}
		++x;
	}

	putchar('\n');
	printf("====================\n");

	for(int i = 0; i < x; ++i) {
		if (str_ar[i][0] == '\n')
			continue;
		printf("%s", str_ar[i]);
	}

	return 0;
}

int computeLine(char str[]) {
	
	int c;

	int len = 0;
	int w_space = 0;

	while ((c = getchar()) != EOF && c != '\n') {
		if (w_space >= 1 && (c == ' ' || c == '\n' || c == '\t')) {
			continue;
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			++w_space;
			str[len] = c;
			++len;
		}
		else {
			w_space = 0;
			str[len] = c;
			++len;
		}
	}
	if (c == '\n') {
		str[len] = c;
		++len;
	}

	str[len] = '\0';
	return len;
}

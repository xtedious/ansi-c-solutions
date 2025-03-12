#include <stdio.h>

#define MAXLINE		1000	// maximum amount of characters in a line
#define MAXSTR		1000	// maximum amount of sentences that can be processed

int getLine(char str[]);
void reverse(char str[]);

int main(void) {

	int len = 0;			// current line length
	
	char str[MAXLINE];		// current line
	char str_ar[MAXSTR][MAXLINE];	// output lines
	int x = 0;

	while((len = getLine(str))) {
		reverse(str);

		for(int i = 0; i < len; ++i) {
			str_ar[x][i] = str[i];
		}
		++x;
	}

	putchar('\n');

	for(int i = 0; i < x; ++i) {
		printf("%s", str_ar[i]);
	}

	return 0;
}

int getLine(char s[]) {
	
	int c;

	int len = 0;

	while ((c = getchar()) != EOF && c != '\n') {
		s[len] = c;
		++len;
	}
	if (c == '\n') {
		s[len] = c;
		++len;
	}

	s[len] = '\0';

	return len;
}

void reverse(char s[]) {
	
	int len = 0;

	while (s[len + 1] != '\n') {
		++len;
	}
	

	char temp;
	int z_pnt = len;		// the pointer at the end of the string
	int a_pnt;			// the pointer at the beginning of the string
	
	for(a_pnt = 0; a_pnt < z_pnt; ++a_pnt) {
		temp = s[a_pnt];
		s[a_pnt] = s[z_pnt];
		s[z_pnt] = temp;
		--z_pnt;
	}
}

#include <stdio.h>

#define UL_DIFF	32	// The space between lower case letters and upper case letters in ascii
#define MAX_F	128	// The maximum amount time a single character can appear

int main(void) {
	int c;

	// The array holding all 26 letters (upper and lower included)
	unsigned int charFreq[26] = { 0 };

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			continue;
		}
		else if ( c <= 'Z' && c >= 'A') {
			++charFreq[c + UL_DIFF - 'a'];
		}
		else if (c >= 'a' && c <= 'z') {
			++charFreq[c - 'a'];
		}
	}
	
	// Print the Histogram
	printf("Character frequency histogram:\n");
	for (unsigned int i = 0; i < 26; ++i) {
		printf("%c: ", i + 'A');
		for (unsigned int j = 0; j < charFreq[i]; ++j) {
			printf("#");

			// Handle error case
			if (j >= MAX_F) {
				break;
			}
		}
		printf("\n");
	}
}

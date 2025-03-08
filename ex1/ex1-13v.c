#include <stdio.h>

#define OUT	0	/* Outside of a word */
#define IN	1	/* Inside a word */
#define MAX_LEN	24	/* Maximum amount of characters a word can have */

int main(void) {
	int c, state;

	state = OUT;
	int words, word_len;

	word_len = words = 0;

	int lenHist[128] = { 0 };

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			lenHist[words - 1] = word_len;
			word_len = 0;
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++words;
		}
		
		/* Count the number of characters in the word */
		if (state == IN)
			++word_len;
	}

	char freqHistogram[MAX_LEN][words];

	/* Populate the Histogram with spaces */
	for (int i = 0; i < MAX_LEN; ++i) {
		for (int j = 0; j < words; ++j) {
			freqHistogram[i][j] = ' ';
		}
	}
	
	/* This is to populate our histogram with the pounds to represent word length */
	for (int i = 0; i < words; ++i) {
		for (int j = 0; j < MAX_LEN; ++j) {
			if (j < lenHist[i]) {
				freqHistogram[j][i] = '#';
			}
		}
	}

	/* Print the histogram */
	for (int i = MAX_LEN - 1; i >= 0; --i) {
		for (int j = 0; j < words; ++j) {
			printf("%c", freqHistogram[i][j]);
		}
		printf("\n");
	}

	return 0;
}

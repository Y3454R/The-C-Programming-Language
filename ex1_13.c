#include <stdio.h>

#define maxWords    100
#define IN  1
#define OUT 0

int main() {
    int c, mx = 0, wordCount = 0, state = OUT;
    int wordLen[maxWords];

    for (int i = 0; i < maxWords; i++) {
        wordLen[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            ++wordCount;
            state = IN;
        }
        if (state == IN) {
            ++wordLen[wordCount - 1];
            if (wordLen[wordCount - 1] > mx) {
                mx = wordLen[wordCount - 1];
            }
        }
    }

    for (int i = mx; i > 0; --i) {
        for (int j = 0; j < wordCount; j++) {
            if (wordLen[j] == i) {
                putchar('*');
                --wordLen[j];
            }
            else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
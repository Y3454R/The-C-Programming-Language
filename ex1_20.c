/* detab */

#include <stdio.h>

#define TAB 8

int main() {
    int c, i, charCount = 0, spaceNeeded;
    while ((c = getchar()) != EOF) {

        if (c == '\t') {
            spaceNeeded = TAB - (charCount % TAB);
            charCount+= spaceNeeded;
            for (i = 0; i < spaceNeeded; ++i)
                putchar(' ');
        }
        else {
            ++charCount;
            putchar(c);
            if (c == '\n') 
                charCount = 0;
        }
    }
    return 0;
}
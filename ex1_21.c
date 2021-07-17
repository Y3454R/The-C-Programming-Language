#include <stdio.h>

#define TAB 8

// test cse: abi ryesd            fdois

int main() {
    int c, isBlank, charCount, done, tabs, blanks;
    isBlank = 0;
    charCount = 0;
    blanks = 0;
    int blankCount = 0;
    while ((c = getchar()) != EOF) {
        ++charCount;
        //printf("\ncount= %d\n", charCount);
        if (c == ' ') {
            ++blankCount;
            isBlank = 1;
        }
        else {
            if (isBlank) {
                tabs = ((charCount - 1) / TAB) - done;
                //printf("blankcount = %d ", blankCount);
                if (blankCount < TAB)
                  blanks = blankCount;
                else
                  blanks = (charCount - 1) - TAB * (done + tabs);
                //printf("chars= %d tabs= %d blanks= %d ",charCount, tabs, blanks);
                for (int i = 0; i < tabs; ++i)
                    putchar('\t');
                for (int i = 0; i < blanks; ++i)
                    putchar(' ');
            }
            done = charCount / TAB;
            isBlank = 0;
            blankCount = 0;
            putchar(c);
            if (c == '\n')
                charCount = 0;
        }
    }
    return 0;
}

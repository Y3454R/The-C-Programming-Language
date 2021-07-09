#include <stdio.h>

#define totalChars 128

int main() {
    int c, mx = 0;
    int chars[totalChars];

    for (int i = 0; i < totalChars; ++i)
        chars[i] = 0;

    while ((c = getchar()) != EOF) {
        ++chars[c - 1];
        if (chars[c - 1] >= mx) {
            mx = chars[c - 1];
        }
    }
    /*
    for(int i = 0; i < totalChars; i++) {
        printf("%d\n", chars[i]);
    }
    */
    for (int i = mx; i > 0; --i) {
        for (int j = 0; j < totalChars; ++j) {
            if (chars[j] == i) {
                putchar('*');
                --chars[j];
            }
            else {
                putchar(' ');
            }
            //putchar('\t');
        }
        putchar('\n');
    }
    /*
    for(int i = 33; i < totalChars; ++i) {
        char ch = i;
        putchar(ch);
        //putchar('\t');
    }
    */
}
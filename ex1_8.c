#include <stdio.h>

int main()
{
    int c, blank_count, tab_count, newlines_count;

    blank_count = tab_count = newlines_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank_count;
        }
        if (c == '\t') {
            ++tab_count;
        }
        if (c == '\n') {
            ++newlines_count;
        }
    }

    printf("\nblanks: %d\ttabs: %d\tnewlines: %d\n", blank_count, tab_count, newlines_count);
    return 0;
}
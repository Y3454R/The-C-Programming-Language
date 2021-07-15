#include <stdio.h>
#define MAXLN 1000

int getLen(char[]);
void reverse(char[]);

int main() {
    int c, i;
    char line[MAXLN];
    i = 0;
    while ((c = getchar()) != EOF) {
        line[i] = c;
        ++i;
        if (c == '\n' || i >= MAXLN - 1) {
            line[i] = '\0';
            i = 0;
            reverse(line);
            printf("%s", line);
        }
    }
}

int getLen(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        ;
    return i;
}


void reverse(char s[]) {
    int len = getLen(s);
    int i, temp;
    for (i = 0; i < len / 2; ++i) {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    if (s[0] == '\n') {
        for (i = 0; i + 1 < len; ++i) {
            s[i] = s[i + 1];
        }
        s[i] = '\n';
    }
}
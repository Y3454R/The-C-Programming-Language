#include <stdio.h>

int main()
{
    int c, flag = 1;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if(flag) {
                putchar(c);
                flag = 0;
            }
        }
        else {
            flag = 1;
            putchar(c);
        }
    }
}
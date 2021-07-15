#include <stdio.h>
#define MAXLINE 1000

int rmv(char [], int);

int main() {

    int len;
    char line[MAXLINE];

    while ((len = rmv(line, MAXLINE)) > 0) {
        printf("%s", line);
    }

}


int rmv(char str[], int lim) {
    int c, i, temp, inputCnt, startFlag, blankFlag;
    i = temp = -1;
    inputCnt = startFlag = blankFlag = 0;

    while ((c = getchar()) != EOF) {

        ++inputCnt;

        if (c == '\t')
            c = ' ';

        if(c == '\n' || inputCnt > MAXLINE) 
            break;

        if (!startFlag) {
            if (c != ' ') {
                startFlag = 1;
                str[++i] = c;
            }
        }
        else {
            if (c == ' ') {
                if(!blankFlag) {
                    temp = ' ';
                    blankFlag = 1;
                }
            }
            else {
                if (temp != -1) {
                    str[++i] = temp;
                }
                str[++i] = c;
                blankFlag = 0;
                temp = -1;
            }
        }
    }
    if (c == '\n') {
        str[++i] = c;
        ++i;
    }
    str[i] = '\0';
    return i;
}
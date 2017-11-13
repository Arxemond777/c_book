#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* максимальный размер вводимой строки */

int getlines(char s[], int limit);

void copy(char to[], char fromf[]);

int main() {

    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    max = 0;

    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {/* была ли хоть одна строка? */
        int l = (strlen(longest) + 1);
        printf("String: (%s), length: %d\n", longest, l);
    }

    return 0;
}

int getlines(char s[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == 'n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

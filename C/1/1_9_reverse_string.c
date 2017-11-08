#include <stdio.h>
#define MAXLINE 1000

int main() {
    int c, i;
    char string[MAXLINE], a;
    for (i = MAXLINE-1; i > 0 && (c = getchar()) != EOF && c != '\n'; --i) {
        string[1] = c;
        printf("%d\n", c);
    }

    printf("%s\n", string);
}
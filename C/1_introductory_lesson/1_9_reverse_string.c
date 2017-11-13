#include <stdio.h>
#include <string.h>

int main() {

    char s[100], r[100];
    int n, c, d;


    printf("Input a string\n");
    gets(s);

    n = strlen(s); // length - 1

    // c = length - 1, d = 0; c >= 0; c--, d++
    // итерируешься в обратном порядке, а d-переменная для индекса массива
    for (c = n - 1, d = 0; c >= 0; c--, d++) {
        r[d] = s[c];
    }

    r[d] = '\0';

    printf("%s\n", r);

    return 0;
}
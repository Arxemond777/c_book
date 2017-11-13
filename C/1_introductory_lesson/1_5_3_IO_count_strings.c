#include <stdio.h>

/* подсчет строк входного потока */
int
main() {
    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF) { // Например 45 - char символа minus(-) и по нажатию минуса будет выход
        if (c == '\n') {
            ++nl;
        } else {
            printf("%d\n", c);
        }
    }

    printf("%d\n", nl);
}
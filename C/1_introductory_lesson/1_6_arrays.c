#include <stdio.h>

/* подсчет цифр, символов-разделителей и прочих символов */
int
main() {
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;

    printf("Я тута %d\n", 'a'); // code a=97
    printf("Я тута %d\n", '0'); // code 0(zero)=49
    printf("Я тута %d\n", 'a' - '0'); // code a(97)-0(49)=48(code ONE)
    printf("Я тута %d\n", (c = getchar()) == 97);
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
//    while ((c = getchar()) != EOF) {
    while ((c = getchar()) != EOF) {
        //printf(" -> %d <-\n", getchar());
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("цифры =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", символы-разделители = %d, прочие = %d\n", nwhite, nother);
}
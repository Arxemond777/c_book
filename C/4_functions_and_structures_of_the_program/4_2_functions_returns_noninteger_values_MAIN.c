#include <stdio.h>

#define MAXLINE 100

//int getlined(char line[], int max);

/* примитивный калькулятор */
int main() {
    //TODO можно объявлять ф-ию, как переменную atof(char[])
    double sum, atof(char[]);
    char line[MAXLINE];
    int getlined(char line[], int max);
    sum = 0;
    while (getlined(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
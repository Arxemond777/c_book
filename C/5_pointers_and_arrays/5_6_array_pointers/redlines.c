#include <stdio.h>
#include <string.h>
#define MAXLEN 1000 /* максимальная длина строки */

int getlineMy(char *, int);

char *allocMy(int);

/* readlines: чтение строк */
int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while ((len = getlineMy(line, MAXLEN)) > 0)
        if (nlines >= maxlines || (p = allocMy(len)) == NULL)
            return -1;
        else {
            line[len - 1] = '\0'; /* убираем символ \n */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}
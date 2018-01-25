#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* максимальное число строк */
char *lineptr[MAXLINES]; /* указатели на строки */
int readlines(char *lineptr[], int nlines);

void writelinesMy(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* сортировка строк */
int main() {
    int nlines; /* количество прочитанных строк */
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        writelinesMy(lineptr, nlines);
        return 0;
    } else {
        printf("ошибка: слишком много строк\n");
        return 1;
    }
}
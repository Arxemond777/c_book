#include <stdio.h>
void writelinesMy(char *lineptr[], int nlines) {
    /*int i;
    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);*/

    printf(1);
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}
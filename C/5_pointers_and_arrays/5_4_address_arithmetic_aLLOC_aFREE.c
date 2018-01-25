#include <stdio.h>
#import  <stddef.h>
#define ALLOCSIZE 1000

static char
        allocbuf[ALLOCSIZE],
        *allocp = allocbuf; // pointer by free place (&allocbuf[0])

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) { // контролирует, достаточно ли пространства, чтобы удовлетворить запрос на n символов
//        Если памяти
//        достаточно, то новое значение для allocp должно указывать не далее чем на следующую позицию за
//        последним элементом allocbuf
        allocp = allocp + n;
//        printf("%i\n", &allocbuf);
//        printf("%d\n", allocbuf[3]);
//        printf("%d\n", allocbuf-1);
//        printf("%d\n", *(&allocbuf-1));
//        printf("%d\n", (&allocbuf-1));
//        printf("%s\n", allocp);
        return allocp - n;
    } else {
        return 0;
    }
}

void afree(char *p) {
    // адресс НИКОГДА не равен 0
    // адреса в одном массиве можно сравнивать, и для них работают > >= etc. Но НЕЛЬЗЯ сравнивать адресной арифметикой
    // адреса разных массивов
    printf("%d\n", p >= allocbuf);
    printf("%s\n", allocbuf);
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

size_t strlenMy(char *s) {
    char *p = s; // p AND s pointed in first character
    while(*p != '\0') {
        //printf("%c \n", *p);
        p++; // increment p while we meet \0
    }
    return p - s; // last character - first character
}
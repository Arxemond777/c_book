#include <stdio.h>
#import  <stddef.h>
#define ALLOCSIZE 1000

static char
        allocbuf[ALLOCSIZE],
        *allocp = allocbuf; // pointer by free place (&allocbuf[0])

char *allocMy(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) { // контролирует, достаточно ли пространства, чтобы удовлетворить запрос на n символов
//        Если памяти
//        достаточно, то новое значение для allocp должно указывать не далее чем на следующую позицию за
//        последним элементом allocbuf
        allocp = allocp + n;
        return allocp - n;
    } else {
        return 0;
    }
}
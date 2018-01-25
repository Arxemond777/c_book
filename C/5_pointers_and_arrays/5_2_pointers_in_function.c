#include <stdio.h>

void aaa(int *a);

int z; // outer variable without initialization = 0

int main() {
    static int y; // static without initialization = 0
    int i = 1; // only implicit initialization "определение" - создается природа переменной и выделяется память
    int x; // without implicit = initTrash. "объявление" 1_10 фиксируется природа, но память не выделяется
    aaa(&i);
    aaa(&x);
    aaa(&y);
    aaa(&z);

    printf("%d\n", i);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}

void aaa(int *a) {
//    printf("%d\n", a);
    *a = *a + 666;
}
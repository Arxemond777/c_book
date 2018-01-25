#include <stdio.h>

int some(int a, char *c);

int main() {

    char x = 3;
    int b = some(2, &x);
    printf("%d\n", b);
}

int some(int a, char *c) {
    return a * (*c);
}
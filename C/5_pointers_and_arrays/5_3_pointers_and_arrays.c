#include <stdio.h>

int main() {
    int i[] = {1, 2, 3};

    ++i[1]; // in documentation it is written that i[1] can NOT increment
    printf("%d\n", x);
    (*(i + 1))++; // in documentation it is written that (i + 1) CAN increment
    printf("%d\n", *(i + 1));
}
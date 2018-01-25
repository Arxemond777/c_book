#include <stdio.h>
#include  <stddef.h>

char *alloc(int n);

void afree(char *p);

//char *alloc(int n);

size_t strlenMy(char *s);

int main() {
    char cc = *alloc(100);
    printf("%c \n", cc);

    char c = 'a';
    afree(&c);

    size_t s = strlenMy("xyi");
    printf("sum=[%zu] \n", s);


    int j = 3;
    int *i = &j;
    *i = 6;
    printf("%d \n", *i);
    printf("%d \n", j);

}
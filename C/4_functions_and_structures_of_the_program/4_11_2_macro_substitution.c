#include <stdio.h>
#include <ctype.h>
// #define ("YES") 123 // you can not do is this way
#define max(A, B) ((A) > (B) ? (A) : (B))
#undef getchar // getchar undefined from <ctype.h>. You can implement your faction with these name now
#define back paste(name, 1)
#define paste(front, back) front ## back
#define dprint(expr) printf(#expr " = %d\n", expr)

int main() {
    //printf("w %d\n", YES);

    int y = 6, z = 2; // calculation error when the variable has negative sign
    int x = max(y++, z++);

    printf("X = %d\n", x);

//    printf(paste(1, 3));
    dprint(y/z);
}
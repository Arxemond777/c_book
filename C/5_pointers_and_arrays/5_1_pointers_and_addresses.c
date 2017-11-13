#include <stdio.h>
#include <string.h>
#define dprintOne(expr) printf("%d\n", expr)
#define dprintTwo(expr, exprTwo) printf("%d | %d\n", expr, exprTwo)
#define dprintTree(expr, exprTwo, exprTree) printf("%d | %d | %d\n", expr, exprTwo, exprTree)

int main() {
    int x = 1, y = 2, z[10];
    printf("x=%d, y=%d, z[0]=%d\n", x, y, z[0]);
    int *ip; /* ip - yказатель на int */
    printf("aaa\n");
    printf("%d\n", ip);
    printf("aaa\n");
    ip = &x; /* теперь ip yказывает на x */
    printf("%d | %d\n", ip, x);
    y = *ip; /* y теперь равен 1 */
    printf("%d | %d | %d\n", ip, x, y);
    *ip =0; /* x теперь равен 0 */
    printf("%d | %d | %d | %d\n", ip, x, y, z[0]);
    ip = &z[0]; /* ip теперь yказывает на z[0] */
    printf("%d | %d | %d | %d\n", ip, x, y, z[0]);
}
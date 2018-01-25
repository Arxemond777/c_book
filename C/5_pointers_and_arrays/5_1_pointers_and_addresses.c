#include <stdio.h>
#include <string.h>
#define dprintOne(expr) printf("%d\n", expr)
#define dprintTwo(expr, exprTwo) printf("%d | %d\n", expr, exprTwo)
#define dprintTree(expr, exprTwo, exprTree) printf("%d | %d | %d\n", expr, exprTwo, exprTree)

int main() {
    int x = 1, y = 2, z[10];
    printf("x=%d, y=%d, z[0]=%d\n", x, y, z[0]);
    int *ip; /* ip - yказатель на int */
    printf("----\n1) *ip - yказатель на int (int *ip) *ip={%d}\n----\n", ip);
    ip = &x; /* теперь ip yказывает на x */
    printf("2) теперь ip yказывает на &x ip={%d} | (ip = &x)&x={%d}\n", ip, x);
    y = *ip; /* y теперь равен 1 */
    printf("3) y теперь равен 1 ip={%d} | x={%d} | (y = *ip)y={%d}\n", ip, x, y);
    *ip = 0; /* x теперь равен 0 */
    printf("4) x теперь равен 0 ip={%d} | (*ip = 0 SHOW STEP 1)x={%d} | y={%d} | z[0]={%d}\n", ip, x, y, z[0]);
    ip = &z[0]; /* ip теперь yказывает на z[0] */
    printf("5) ip теперь yказывает на z[0] ip={%d} | x={%d} | y={%d} | (ip = &z[0] REDEFINE) z[0]={%d}\n", ip, x, y, z[0]);
    *ip = *ip+ 10;
    printf("6) увеличили ip, а на самом деле число на которое указывает *ip ip={%d} | z[0]={%d}\n", ip, z[0]);
    void *voidA, *voidB;
    printf("%d, %d\n",voidA, voidB);
}
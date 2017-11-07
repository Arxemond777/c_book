#include <stdio.h>

int main() {
    float a = 0.5, b = 0.7;

//    printf("%6.1000f\n", a+b);

    /*double nc;
    for (nc = 0; nc < 10000000000; ++nc) {
        if (nc == 10000000000-1) {
            printf("a\n");
        }
    }*/

    printf("Start\n");
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        printf("%.0f\n", nc);
}
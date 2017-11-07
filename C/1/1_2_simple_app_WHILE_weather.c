#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("Fahr: %3.0f\t Celsius: %6.1f\n", fahr, celsius);
        printf("Fahr: %3.0f\t Celsius: %6f\n", fahr, celsius);
        printf("Fahr: %3.0f\t Celsius: %.2f\n", fahr, celsius);
        printf("_______\n");
        fahr = fahr + step;
    }

    int i = 5 / 9; // truncation
    printf("%d\n", i);

    float j = 5.0 / 9.0;
    printf("%f\n", j);

    float x = 5 / 9; // TODO
    printf("%f\n", x);
}
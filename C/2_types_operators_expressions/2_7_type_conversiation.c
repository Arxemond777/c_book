#include <stdio.h>

int atoi(char s[]);
int lower(int c);

int main() {
    long int ln = 100000000000;
    int i = ln;
    short int sh = ln;

    printf("ln: %ld; int: %d; sh: %d\n", ln, i, sh);

    int i1 = atoi("23");
    printf("ATOI: %d\v\n", i1);

    int character = lower(65); // A = 65
    printf("Lower: %d\v\n", character); // a = 97

    /**
     * Для совместимости переменные типа char, в которых хранятся несимвольные
     * данные, следует специфицировать явно как signed или unsigned
     * */

    long double ld = 662222.0000002;
    double d = 113.1;
    printf("Lalal %1.100Lf\n\v", ld+d); // к long double оба
    printf("Lalal %1.100Lf\n\v", ld+sh); // long double оба short->long double
    printf("chart plus int %d\n", 1 + 'a'); // 1) char->int 2) int + int

    /**
     * Если х принадлежит типу float, a i — типу int, то и х = i, и i = x вызовут
     * преобразования, причем перевод float в int сопровождается отбрасыванием
     * дробной части. Если double переводится во float, то значение либо
     * округляется, либо обрезается; это зависит от реализации.
     *
     * При отсутствии прототипа функции аргументы типа char и short переводятся в
     * int, a float — в double. Вот почему мы объявляли аргументы типа int или
     * double даже тогда, когда в вызове функции использовали аргументы типа char
     * или float.
     */

    /**
     * Если аргумент описан в прототипе, то кастуется к указанному типу
     * double sqrt(double);
     * root2 = sqrt(2); // 2 кастуется в double 2.0
     */
}

int atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        /**
         * s[i] - '0' дает числовое значение символа, хранящегося
         * в s[i], так как значения '0' , '1' и пр. образуют
         * непрерывную возрастающую последовательность.
         * */
        n = 10 * n + (s[i] - '0');
    return n;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z' )
        return c + 'a' - 'A';
    else
        return c;
}
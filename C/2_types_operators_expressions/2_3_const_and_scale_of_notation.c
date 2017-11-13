#include <stdio.h>
#define FIFTEEN_IN_HEXEDECIMAL_UNSIGNED 0XFUL // 0XF = 15; U = unsigned; L = long;
#define OCTAL_INT '\007'
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
int lalal(const char[] );

int main() {
    int i = 037; // 31(in decimal-system) == 037 in octal system
    int ii = 0X1F; // 31(in decimal-system) == 0X1F in octal hexadecimal

    printf("8->10: %d\n", i);
    printf("16->10: %d\n", i);
    printf("%d\v\n", OCTAL_INT);

    /**
     * Будьте внимательны и помните, что символьная константа
     * и строка, содержащая один символ, не одно и то же: 'х'
     * не то же самое, что "х". Запись 'х' обозначает целое
     * значение, равное коду буквы х из стандартного
     * символьного набора, а запись "х" - массив символов,
     * который содержит один символ (букву х) и '\0'.
     */

    printf("%d\n", FEB);

    float eps = 1.0e-5;
    printf("%f\n", eps);

    lalal("aa");
//    lalal('a'); // Error: Запись 'х' обозначает целое значение, равное коду буквы х из стандартного символьного набора
}

int lalal(const char s[]) {
    /**
     * Применительно к массиву квалификатор const указывает
     * на то, что ни один из его элементов не будет меняться.
     * Указание const можно также применять к аргументу-массиву,
     * чтобы сообщить, что функция не изменяет этот массив
     * */
    // переопределить массив можно, но переопределеять отдельные значения в первоночальном массив нельзя
//    s[0] = "a";
    printf("%s\n", s);
    return 0;
}
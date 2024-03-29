#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {

    // &
    int i = 110;
    int i1 = 10;

    printf("%d\n", i & i1); // обычное бинарное & 1&0=0, 0&0=0, 1&1=1

    // | OR

    // ~ NOT (~0=1; ~1=0)

    // ^ XOR (0^0=0; 1^1=0; 1^0=0; 0^1=1)

    // >> right shift
    int x = 14; // Bit pattern 00001110
    int y = x >> 1; // here we have the bit pattern shifted by 1 thus we get 00000111 = 7 which is 14/2

    printf("%d\n", y);

    y = y; // 00000111
    int jj = y << 1; // 00001110
        int iii = getbits(jj, 5, 4); // 4, 3, 2 бит прижимая их к правому краю
        printf("4, 3, 2 бит прижимая их к правому краю: %d=%d\n", iii, jj);
    printf("%d\n", jj);

    jj = jj << 1; // 00011100
    printf("%d\n", jj);

    jj = jj << 2; // 001110000
    printf("%d\n", jj);

    /**
     * Сдвиг вправо знаковой величины на одних машинах
     * происходит с распространением знака ("арифметический сдвиг"),
     * на других — с заполнением освобождающихся разрядов нулями ("логический сдвиг").
     * */

    // если float и int - то обе части приводятся к float (к bitwise operation никак не относится)
    /**
     * х = f() + g();
     * f может быть вычислена раньше g или наоборот. Из этого следует, что если одна из функций
     * изменяет значение переменной, от которой зависит другая функция, то помещаемый в x
     * результат может зависеть от очередности вычислений. Чтобы обеспечить нужную
     * последовательность вычислений, промежуточные результаты можно запоминать во временных
     * переменных
     * */

    /**
     * a[i] = i++;
     * возникает вопрос: массив a индексируется старым или измененным значением i?
     * Компиляторы могут по- разному генерировать программу, что проявится в интерпретации
     * данной записи. Стандарт сознательно устроен так, что большинство подобных вопросов
     * оставлено на усмотрение компиляторов, так как лучший порядок вычислений определяется
     * архитектурой машины. Стандартом только гарантируется, что все побочные эффекты при
     * вычислении аргументов проявятся перед входом в функцию. Правда, в примере с printf
     * это нам не поможет.
     * */
}

/* getbits: получает п бит, начиная с р-й позиции */
unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
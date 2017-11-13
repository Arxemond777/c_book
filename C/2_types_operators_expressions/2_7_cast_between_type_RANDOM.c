#include <stdio.h>

unsigned long int next = 1;

int rand(void);
void srand(unsigned int seed);

int main() {
    int i = rand();
    printf("%d\n", i);
    printf("%lu\n", next);

    srand(1); // при ЛЮБОМ отрицательном кастуется в максимум4739560784397194865
    i = rand();
    printf("%d\n", i);
    printf("%lu\n", next);
}



/* rand: возвращает псевдослучайное целое 0...32767 */
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

/* srand: устанавливает "семя" для rand() */
void srand(unsigned int seed) {
    next = seed;
}

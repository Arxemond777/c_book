#include <stdio.h>

struct key {
    char *word;
    int count;
} keytab[NKEYS];

// the entry below is equals the entry above
/*struct key {
    char *word;
    int count;
};
struct key keytab[NKEYS];*/

/*struct key {
    char *word;
    int count;
} keytab[] = { // for binary search this structure must be sorted
        "auto", 0,
        "break", 0,
        "case", 0,
        "char", 0,
        "const", 0,
        "continue", 0,
        "default", 0,
        "unsigned", 0,
        "void", 0,
        "volatile", 0,
        "while", 0
};*/

/**
 * #define NKEYS (sizeof keytab / sizeof keytab[0])
 * Преимущество такого рода записей в том, что их не надо корректировать при изменении типа.
 * Поскольку препроцессор не обращает внимания на имена типов, оператор sizeof нельзя применять в #if.
 * Но в #define выражение препроцессором не вычисляется, так что предложенная нами запись допустима.
 */

int main() {}
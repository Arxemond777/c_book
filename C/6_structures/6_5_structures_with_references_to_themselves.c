#include <stdio.h>

struct tnode { /* узел дерева */
    char *word; /* указатель на текст */
    int count; /* число вхождений */
    struct tnode *left; /* левый сын */
    struct tnode *right; /* правый сын */
};

struct t {
    struct s *p; /* p указывает на s */
};
struct s {
    struct t *q; /* q указывает на t */
};
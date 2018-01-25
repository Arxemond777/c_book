#include <stdio.h>

int strcmpWithoutPointers(char *s1, char *s2);

int main() {

    char *s1 = "abc";
    char *s2 = "abcd";

    int i = strcmpWithoutPointers(s1, s2);

    printf("%d \n", i);
}

int strcmpWithoutPointers(char *s1, char *s2) {

    int i;
    // wile true
    for (i = 0; s1[i] == s2[i]; i++) {
        printf("s1=%d s2=%d \n", s1[i], s2[i]);
        if (s1[i] == '\0') {
            return 0;
        }
    }

    // when true, exit and compare symbol on which there was an exit
    return s1[i] - s2[i];

}

int strcmpWithPointers(char *s1, char *s2) {
    for(; *s1 == *s2; s1++, s2++) {
        if (s1[i] == '\0') {
            return 0;
        }
    }

}

/* strcpy: копирует t в s; версия 3 (с указателями) */
void myStrcpy(char *s, char *t)
{
    while (*s++ = *t++);
}
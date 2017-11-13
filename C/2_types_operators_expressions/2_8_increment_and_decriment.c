#include <stdio.h>

void squeeze(char s[], int c);
void strcatt(char s[], char t[]);

int main() {
//    squeeze("abc", 97);

    char s[1024] = "a";
    char t[1024] = " d";
    strcatt(s, t); // s via pointer

    printf("%s\n", s);
}

void squeeze(char s[], int c) { // bus error
    int i, j;
    for (i = 0, j = 0; s[i] != '\0'; i++) {
        //printf("%d\n", s[i]);
        //printf("%d\n", s[i]);
        if (s[i] != c) {
            s[j] = s[i];
        }
    }

    //printf("%d\n", i);
    s[i] = '\0';

    printf("%s\n", s);
}

void strcatt(char s[], char t[]) {
    int i, j;
    i = j = 0;
    while (s[i] != '\0') /* находим конец s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* копируем t */
        ;
}
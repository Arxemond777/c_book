#include <stdio.h>

#define MAXLINE 10

int getlined(char line[], int max);

int strindex(char source[], char searchfor[]);

int main() {
    char line[MAXLINE];
    int found = 0;
    while (getlined(line, MAXLINE) > 0)
        if (strindex(line, "vasy") >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}
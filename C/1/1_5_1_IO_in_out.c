#import <stdio.h>

int
main ()
{
    printf("EOF = %d\n", EOF);
    int c;
    while ((c = getchar()) != EOF) {
//        printf("was input: ");
        putchar(c);
//        printf("\n");
    }
}

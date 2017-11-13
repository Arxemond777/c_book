#include <stdio.h>
#include <float.h>

int main() {
    double d = 0.1d + 0.2d; // 0.30000000000000004440892098500626161694526672363281
    printf("%1.50f\n", d); // More accurate

    float f = 0.1 + 0.2; // 0.30000001192092895507812500000000000000000000000000
    printf("%1.50f\n", f);

    short int sh = 2000; // if sh > 11520 then warning and output 11520(upper limit for SHORT)
    printf("%d\n", sh);

    long int ln = 200000000;
    printf("%d\n", ln);

    signed char signedChar = 'a';
    unsigned char signedChar = 'a';
}
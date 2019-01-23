#include <iostream>
#include "test_macro.h"

#define SUM(x, y) (x+y)

using namespace std;

// clang++ macro.cpp -o macro -DDEBUG; ./macro
#ifdef DEBUG
    #define log_info(M, ...) fprintf(stderr, "[INFO] (%s: %d) " M "\n", \
                __FILE__, __LINE__, ##__VA_ARGS__)
#else
    #define log_info(M, ...)
#endif

using namespace std;

int main() {
    int a = 2, b = 3;

    int res = SUM(a, b);

    log_info("Start of program");
    printf("%d\n", res);
    printf("%d\n", H(4));

    char c = 'r';
    char n = 'c';
    char g = 'y';

    cout << test_inline(&c) << endl;
    cout << test_inline(&n) << endl; // ?
    cout << test_inline(&g) << endl; // ?

    return 0;
}
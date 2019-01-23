#define H(x) ((x) * 2)

static inline __attribute__((always_inline)) int test_inline(const char* c) {
    printf("my -> '>%s<'\n", c);
    printf("----\n");

    return (!c || (*c == '\0'));
}
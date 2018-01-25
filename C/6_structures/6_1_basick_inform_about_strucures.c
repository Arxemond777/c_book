#include <stdio.h>

struct point {
    int x;
    int y;
} tag_for_explicit_invocation;

struct rect {
    struct point pt1;
    struct point pt2;
};

//struct pointSimilar {} x, y;

struct point pt;

int main() {
    struct point pt = {1, 2};
//    struct pointSimilar pt1 = {3, 5};
    printf("%d\n", pt.x);


    tag_for_explicit_invocation.x = 4;
    printf("%d\n", tag_for_explicit_invocation.x);
    printf("%d\n", tag_for_explicit_invocation.y);
//    printf("%d\n", pt1.x);

//    point.x = 1;
//    printf("%d\n", point.x);
    struct rect screen = {{5, 6}, {7, 8}};
    printf("%d\n", screen.pt1.y);
}
#include <stdio.h>

struct point {
    int x;
    int y;
    int z;
} tag_for_explicit_invocation;

struct point makepoint(int x, int y, int z)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

int main() {
    struct point s = makepoint(1+2, 666, 7);
    printf("%d\n", s.x);

    struct point original, *pp;
    pp = &original;
    original.x = 666;

    printf ("origin: (was define x = %d, not define = %d)\n", (*pp).x, (*pp).y);

    //short entry without (*name).x we use name->x
    printf ("origin: (was define x = %d, not define = %d)\n", pp->x, pp->y);

    /**
     * ++p->len OR *p->len++ increase LEN not p
     * (++p)->len increase the LEN not p
     * *p++->str increase the P value after the current sample STR
     */

    printf("sizeof size_t=%lu byte\n", sizeof(s));
    printf("sizeof size_t=%lu byte\n", sizeof(s.x));
}
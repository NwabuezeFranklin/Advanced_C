#include<stdio.h>
#include<stdlib.h>

struct recap {
    int m;
    int e;
};
typedef struct recap add;

int main()
{
    add s1 = {3 , 4};
    printf("%d,%d\n", s1.m, s1.e);
    add *s2;
    s2 = malloc(sizeof(add));
    s2->m = 234;
    s2->e = 345;
    printf("%d,%d", s2->m, s2->e);
}
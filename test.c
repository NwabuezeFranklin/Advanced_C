#include<stdio.h>
//retribution
//No days off
int *factorial(int *m, int *y)
{
    printf("Address of m %d\n", &m);
    printf("Value of m %d\n", m);

    int c; 
    c = (*m) + (*y);
    printf("%d", c);

}
int main()
{
    int *c, a = 5, b = 5;
    printf("%d\n", &a);
    printf("%d\n", &c);

    c=factorial(&a, &b);
    //printf("%d", c);
}
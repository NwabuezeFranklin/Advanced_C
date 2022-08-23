#include<stdio.h>
#include<stdlib.h>
//Retribution

int main()
{
    char c;
    int j, m, k = 0;
    printf("Enter two numbers with an operator: ");
    scanf("%d %c %d", &j,&c,&m);
    if (c == '+')
    {
        k = j + m;
        printf("The sum is %d", k);
    }
    else
    {
        printf("Error");
    }

}
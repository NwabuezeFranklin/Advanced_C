#include<stdio.h>
#include<stdlib.h>
// Retribution
//Finally Malloc

int main()
{
    int *ptr;
    printf("Size of ptr = %d\n", sizeof(ptr));
    ptr = malloc(4 * sizeof(int));
    printf("The address of the pointer %d\n", &ptr);
    printf("Size of ptr = %d\n", sizeof(ptr));
    printf("The address of the Malloc space provided %d\n", ptr);
    free(ptr);
}
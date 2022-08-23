#include<stdio.h>
#include<stdlib.h>
// Masters degree
//Malloc revisit
int main()
{
    int i = 0;
    printf("%d\n",i);
    printf("The address of the i = %d\n ", &i);
    int *ptr;
    ptr = &i;
    *(ptr) = 23;
    printf("%d\n",i);
    printf("The value stored in the pointer %d\n", ptr);
    printf("The address of the pointer %d\n", &ptr);
    

    
}

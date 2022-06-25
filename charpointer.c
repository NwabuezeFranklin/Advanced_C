#include<stdio.h>
#include<string.h>
//No days off
//Retribution
void print(char *c)
{
    int i = 0;
    while(*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    
}

int main()
{
    char c[20] = "Nwabueze";
    print(c);
}
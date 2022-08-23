#include<stdio.h>

int loop(int m)
{
    if (m == 1)
    {
        printf("%d\n This is 1\n", m);
    }
    else if (m < 1)
    {
        printf("%d This was less than 1\n", m);
    }
    else{
        printf("%d This was greater than 1\n", m);
    }

}
int main()
{
    loop(23);
}
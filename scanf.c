#include<stdio.h>
#include<stdlib.h>
//Retribution
//No days off
// 20 Functions for primary
// and secondary school Mathematics
// user input
// Factorails


 int recursion(int m)
 {
   
   if (m < 1)
   {
      return 0;
   }
   else if ( m > 1)
   {
      return (m + recursion(m - 1));      

   }
 }



 int square(int m, int i)
 {
    int c;
    c = m * i;
    return c;
 }



 int perimeter(int m, int i)
 {
    int c, j = 2 ;
    c = (m + i) * j;
    return c;
 }

int main()
{
   
   float i, j , k,m;
    k =2;
    printf("Enter the base of the triangle:");
    scanf("%f", &i);
    printf("Enter the length of the triangle:");
    scanf("%f", &j);
    if(i >= 0)
    {
        m = (i * j)/k;
        printf("%.1f is the Area of the Triangle\n",m);

        //printf("%d, %d\n Chidera 1can tell what an even number is ", i, j);
    }
    else

     {printf("i think Chidera doesn't know even numbers");}

    int c, a, b;
    printf("Enter the two lenghts of a square:");
    scanf("%d %d", &a,&b);

    c = square(a,b);
    printf(" The square of  the lenghts entered is %d\n", c);

    int p, x, z;
    printf("Enter the lenght and width of the rectangle\n");
    scanf("%d %d",&x,&z);
    p = perimeter(x,z);
    printf("The perimeter of the rectangle is: %d\n", p);
    

   int c;
   c = recursion(1);
   printf("%d", c);
}
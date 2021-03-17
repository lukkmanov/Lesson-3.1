#include <stdio.h>
#include "conio.h"
#include <math.h>

void rekurs(int a)
{
 if (a != 0)
 rekurs(a / 2);
 else return;
 printf("%d", a % 2);
 return;
}

int Power(int a, int b)
{
    if (b == 0)
      return 1;
    int p = Power(a, b / 2);
    if (b % 2 == 0)
      return p * p;
    else
      return a * p * p;
}

int Degree (int a , int b)
{
    int f;
    if (b % 2 == 0)
    {
        a = a * a ;
        b = b / 2;
        f = pow (a,b);
        return f;
    }
    else {
         a = a * b;
         b = b - 1;
         f = pow (a , b);
         return f;
         }
}

int main()
{
    int a,b,c;
    printf("Enter the number to convert to binary\n");
    scanf("%d", &c);
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter degree\n");
    scanf("%d", &b);
    rekurs(c);
    printf("\n");
    printf("Power = %d\n",Power(a,b));
    printf("Degree = %d\n",Degree(a,b));
    return 0;
}

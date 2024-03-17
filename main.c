#include <stdio.h>
#include <math.h>
int main() {
   int a,b,c;
   float area,s;

   printf("Enter value for a: ");
   scanf("%d",&a);

   printf("Enter value for b: ");
   scanf("%d",&b);

   printf("Enter value for c: ");
   scanf("%d",&c);

   s = (a+b+c)/2.0;
   area = pow(s*(s-a)*(s-b)*(s-c),0.5);

   printf("Area of triangle is %.2f",area);
   return 0;
}

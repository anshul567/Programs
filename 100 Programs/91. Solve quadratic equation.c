#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c,root1,root2;
printf("Please enter a \n");
scanf("%lf",&a);
printf("Please enter b \n");
scanf("%lf",&b);
printf("Please enter c \n");
scanf("%lf",&c);
root1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a);
root2 = (-b - sqrt(b*b-4.*a*c) ) / (2.*a);
printf("___________________________________________________\n");
printf("\nFirst root is %lf ",root1);
printf("\nSecond root is %lf ",root2);
printf("\n ");
return 0;
}

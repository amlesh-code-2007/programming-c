#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float D, r1, r2, root_D;
    printf(" Enter the number of a\n");
    scanf("%d", &a);
    printf(" Enter the number of b\n");
    scanf("%d", &b);
    printf(" Enter the number of c\n");
    scanf("%d", &c);
    D = b*b -4*a*c;
    printf("%d", D);
    root_D = sqrt(D);
    if (D>=0)
    {
     if (D == 0)
       {
        printf(" Roots are real & equal.\n ");
        r1 = r2 = -b/(2*a);
        printf("%f", r1);
      }
     else
     {
       printf(" Roots are real and unequal.\n ");
       r1 = (-b + root_D)/(2*a), r2 = (-b - root_D)/(2*a);
       printf("%f\n", r1);
       printf("%f\n", r2);
     } 
    }
    else{
         printf(" Roots are complex.\n ");
    }

    return 0;
}

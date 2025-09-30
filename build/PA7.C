#include <stdio.h>

int main()
{
    int Num1, Num2;
    printf(" Enter the number1:\n ");
    scanf("%d", &Num1);
    printf(" Enter the number2:\n");
    scanf("%d", &Num2);

    if (Num1 == Num2){
        printf(" Numbers are equal: ");
    }
    
    else if (Num1 > Num2){
       printf(" Number1 is greater than Number2: ");
    }

    else {
        printf(" Number1 is less than Number2: ");
    }
    
    return 0;
}
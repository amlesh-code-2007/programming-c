#include <stdio.h>

int main()
{
    int Number;
    printf(" Enter the number:\n ");
    scanf("%d", &Number);
    
    if (Number > 0) {
        printf(" %d is a postive number.\n ",Number);

        if (Number % 2 ==0)
           {
            printf(" %d is a even number.\n ",Number);
           }
        else
           {
            printf(" %d is a odd number.\n ",Number);
           }
        
    }
    else {
        printf(" %d is a negative number.\n ",Number);
    }
    return 0;
}
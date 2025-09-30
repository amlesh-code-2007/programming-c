#include <stdio.h>

int main()
{
    int num, i, rev = 0, rem, temp;
    printf(" Enter a number to reverse:\n ");
    scanf("%d", &num);
    temp = num;

    for ( i = 0; num !=0; i++)
    {
        rem = num % 10;
        rev = rev *10 +rem;
        num = num/10;
    }
    printf(" reverse num = %d", rev);
     
    if (temp == rev)
    {
        printf(" parendoma hai:\n ");
    }
    else{
        printf(" parendoma nahi hai:\n ");
    }
    
    return 0;
}
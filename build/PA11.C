#include <stdio.h>
#include <conio.h>

int main()
{
    int num,revNum = 0,rem,temp;
    printf(" Enter a number to reverse:\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num = num / 10;
    }

    printf(" After Loop Revise num = %d\n",revNum);
    
    if (temp == revNum)
    {
        printf(" parendoma hai:\n ");
    }
    else{
        printf(" parendoma nahi hai:\n ");
    }

    return 0;
}

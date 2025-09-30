#include <stdio.h>

int main()
{
    int Amleshji, shivu = 0;
    printf("enter a number amleshji\n");
    scanf("%d", &Amleshji);

    do
    {
        printf("%d\n",shivu + 1);
        shivu = shivu + 1;
    } while (shivu < Amleshji);
    
    return 0;
}

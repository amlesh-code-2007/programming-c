#include <stdio.h>

int isPrime(int num){
    if (num < 2) return 0;
    for ( int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main()
{
    printf("prime numbers between 1 and 10000:\n");
    for ( int num = 1; num <= 100; num++)
    {
        if (isPrime(num))
        {
            printf("%d\n", num);
        }
        
    }
    printf("\n");
    return 0;
}

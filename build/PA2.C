#include <stdio.h>

int main()
{
    float principal, rate, time, interest;

    // Input principal amount
    printf("Enter principal amount:\n ");
    scanf("%f", &principal);

    // Input rate of interest
    printf("Enter rate of interest:\n ");
    scanf("%f", &rate);

    // Input time period in years
    printf("Enter time period in years:\n ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}

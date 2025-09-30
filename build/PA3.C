#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    
    // Enter the ferenheight:
    printf(" Enter the number of ferenheight:\n ");
    scanf("%f", &fahrenheit);

    // Calculate the sum of celsius:
    celsius = ((fahrenheit - 32)*100)/180;

    // Output the result
    printf("celsius = %2.f\n", celsius);
    return 0;
}

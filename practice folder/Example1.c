//  Write Program to find size of different data types.

#include <stdio.h>

int main()
{

    printf("size of char: %lu bytes\n", sizeof(char));
    printf("size of int: %lu bytes\n", sizeof(int));
    printf("size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of long double: %lu bytes\n", sizeof(long double));

    return 0;
}

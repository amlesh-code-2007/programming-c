#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x - *y;
    *x = *x + *y;
    *y = temp;
    return;
}
int main()
{
    int a = 76, b = 56;
    printf("%d\n", a);
    printf("%d\n", b);
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
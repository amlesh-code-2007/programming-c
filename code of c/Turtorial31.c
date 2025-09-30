#include <stdio.h>

void anynumber(int* address)
{
    *address = 95673;
}
int main()
{
    int a = 76, b =56;
    printf(" The value of a is %d\n", a);
    printf(" The value of b is %d\n", b);
    anynumber(&a);
    printf(" The value of a is then u change %d\n", a);
    return 0;
}
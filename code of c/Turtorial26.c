#include<stdio.h>

int main()
{
	printf("lets learn about pointer\n");
	int a=76;
	int *ptra = &a;
	printf("The adress of pointer to a is %p\n", &ptra);
	printf("The adress of a  is %p\n", &a);
	printf("The adress of a is %p\n", ptra);
	printf("The value of a is %d\n", *ptra);
	printf("The value of a is %d\n", a);
	
	return 0;
}
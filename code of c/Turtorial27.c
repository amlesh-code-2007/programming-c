#include<stdio.h>

int main()
{
       int arr[] = {311,52,6,7,45,54};
       int* arrayptr = arr;
       printf("value at position 3 of the array is %d\n", arr[2]);
       printf("The adress of first element of the array is %d\n", &arr[0]);
       printf("The adress of first element of the array is %d\n", arr);
       printf("The adress of second element of the array is %d\n", &arr[2]);
       printf("The adress of second element of the array is %d\n", arr+2);

       printf("The value at adress of frist element of the array is %d\n", *(&arr[0]));
       printf("The value at adress of frist element of the array is %d\n", arr[0]);
       printf("The value at adress of frist element of the array is %d\n", (*arr));
       printf("The value at adress of second element of the array is %d\n", *(&arr[1]));
       printf("The value at adress of second element of the array is %d\n", arr[1]);
       printf("The value at adress of second element of the array is %d\n", *(arr+1));

    return 0;
}

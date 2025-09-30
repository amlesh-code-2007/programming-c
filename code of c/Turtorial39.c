#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 9/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[8-i];
        arr[8-i] = temp;
    }
    
}
int main()
{
    int arr[] = {1,2,3,4,5,6,67,45,159};
    printf("Before reversing the array\n ");
    for (int i = 0; i < 9; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    for (int i = 0; i < 9; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    

    return 0;
}
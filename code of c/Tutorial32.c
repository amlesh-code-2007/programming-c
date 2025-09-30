#include <stdio.h>

int func1(int array[])

{
    for (int i = 0; i < 6; i++)
    {
        printf("The value at %d is %d\n",  i, array[i]);
    }
      array[0] = 382;
      array[1] = 458;
      array[2] = 492;
      array[3] = 328;
      array[4] = 629;
      array[5] = 926;
    //   very important point that if you change any value here, it gets reflected in main()

    return 0;
}
int main()
{
    int arr[] = {23, 13, 3, 4, 34, 56};
    func1(arr);
    printf("The value at index 0 is %d\n", arr[0]);
    printf("The value at index 1 is %d\n", arr[1]);
    printf("The value at index 2 is %d\n", arr[2]);
    printf("The value at index 3 is %d\n", arr[3]);
    printf("The value at index 4 is %d\n", arr[4]);
    printf("The value at index 5 is %d\n", arr[5]);
    return 0;
} 

#include <stdio.h>

int main()
{
    int n =8;
    printf(" Enter the number\n ");
    scanf("%d", &n);

    switch (n)
    {
    case 7:
        printf(" Rose Day ");
        break;
    case 8:
        printf(" Propose Day ");
        break;
    case 9:
        printf(" Chocolate Day ");
        break;
    case 10:
        printf(" Teddy Bear Day ");
        break;
    case 11:
        printf(" Promise Day ");
        break;
    case 12:
        printf(" Hug Day ");
        break;
    case 13:
        printf(" Kiss Day ");
        break;
    case 14:
        printf(" Valentine  Day ");
        break;

    default:
        printf(" I am really hate this weak, 'I am heartly support for Army'   ");
    }
    return 0;
}

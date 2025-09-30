//  Write a program to modify a character in a string....

#include <stdio.h>

int main()
{
    char str[100] = "aeiou";
    int position;
    char newChar;

    printf("Original string: %s\n", str);

    printf("Enter the position to modify (0-based index): ");
    scanf("%d", &position);
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    if (position >= 0 && position < strlen(str))
    {
        str[position] = newChar;
        printf("Modified string: %s\n", str);
    }
    else
    {
        printf("Invalid position!\n");
    }

    return 0;
}

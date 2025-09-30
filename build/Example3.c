#include <stdio.h>

int main()
{
    int Day;
    printf(" Amlesh Enter the Day\n");
    scanf("%d", &Day);

    if (Day % 7 == 1) {
        printf("%d is a first day of week Monday.\n", Day);
    }
    
    else if (Day % 7 == 2) {
        printf("%d is a second day of week Tuesday.\n", Day);
    }
    
    else if (Day % 7 == 3) {
        printf("%d is a third day of week Wednesday.\n", Day);
    }

    else if (Day % 7 == 4) {
        printf("%d is a fourth day of week Thrusday.\n", Day);
    }
    
    else if (Day % 7 == 5) {
        printf("%d is a third last day of week Friday.\n", Day);
    }

    else if (Day % 7 == 6) {
        printf("%d is a second last day of week Saturday.\n", Day);
    }

    else if (Day % 7 == 0) {
        printf("%d is a last day of week Sunday.\n", Day);
    }
    else {
    }

    return 0;
}


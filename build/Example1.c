#include <stdio.h>

int main()
{
    int Mounth;
    printf(" Amlesh Enter the Mounth\n");
    scanf("%d", &Mounth);

    if (Mounth % 12 == 1) {
        printf("%d is a first Mounth of the year is january.\n", Mounth);
    }
    
    else if (Mounth % 12 == 2) {
        printf("%d is a second Mounth of the year is february.\n", Mounth);
    }
    
    else if (Mounth % 12 == 3) {
        printf("%d is a third Mounth of the year is March.\n", Mounth);
    }
    
    else if (Mounth % 12 == 4) {
        printf("%d is a fourth day of Mounth this year is April.\n", Mounth);
    }

    else if (Mounth % 12 == 5) {
        printf("%d is a fifth Mounth of this year is May.\n", Mounth);
    }

     else if (Mounth % 12 == 6) {
        printf("%d is a sixth Mounth of this year is June.\n", Mounth);
    }
    
     else if (Mounth % 12 == 7) {
        printf("%d is a sixth last Mounth of this year is July.\n", Mounth);
    }

     else if (Mounth % 12 == 8) {
        printf("%d is a fifth last Mounth of this year is Auggust.\n", Mounth);
    }

     else if (Mounth % 12 == 9) {
        printf("%d is a fourth last Mounth of this year is September.\n", Mounth);
    }

     else if (Mounth % 12 == 10) {
        printf("%d is a third last Mounth of this year is October.\n", Mounth);
    }

    else if (Mounth % 12 == 11) {
        printf("%d is a second last Mounth of this year is November.\n", Mounth);
    }

    else if (Mounth % 12 == 0) {
        printf("%d is a frist last mounth of the year is December.\n", Mounth);
    }

    else {
    }

    return 0;
}
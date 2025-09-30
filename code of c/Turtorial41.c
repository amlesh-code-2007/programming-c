#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char subjects[6][25] = {"Chemistry", "C Programming", "Mathematics", "Web-Technology", "Communication Skills", "Ethics"};
    char subjcode[6][7] = {"CH-103", "CP-101", "MA-105", "WT-102", "CS-104", "ES-107"};
    int midmarks[6], semmarks[6], i = 0;
    int MTotal = 0, count = 0;
    char name[40], fname[40], rno[15], college[50];
    
    printf("Enter your name: ");
    gets(name);
    
    printf("\nEnter your Father name: ");
    gets(fname);
    
    printf("\nEnter your Roll Number: ");
    gets(rno);
    
    printf("\nEnter your College name: ");
    gets(college);

    for (i = 0; i < 6; i++)
    {

        printf("\nEnter your midterm marks for %s: ", subjects + i);
        scanf("%d", &midmarks[i]);
        printf("Enter your semester marks for %s: ", subjects + i);
        scanf("%d", &semmarks[i]);
    }

    printf("\n\n\n\n\t\t**************************** YOUR RESULT ***************************\n\n");
    printf("\t\tCOLLEGE: %s", college);
    printf("\n\t\tNAME: %s", name);
    printf("\n\t\tFTHER NAME: %s", fname);
    printf("\n\t\tROLL NUMBER: %s", rno);
    printf("\n\t\tSUBJECTS \t Marks1 \t Marks2 \t TOTAL");

    for (i = 0; i < 6; i++)
    {
        printf("\n\t");
        printf("\t%s \t\t %d \t\t %d \t\t %d", subjcode[i], midmarks[i], semmarks[i], midmarks[i] + semmarks[i]);

        MTotal = MTotal + midmarks[i] + semmarks[i];
        if (midmarks[i] + semmarks[i] < 45)
            count = count + 1;
    }

    if (count == 0)
        printf("\n\n\t\tTOTAL MARKS: %d \t\tRESULT: PASS", MTotal);
    else
        printf("\n\n\t\tTOTAL MARKS: %d \t\tRESULT: FAIL", MTotal);
    return 0;
}

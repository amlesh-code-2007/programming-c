#include <stdio.h>

struct Driver
{
    char name[40];
    char dlNo[45];
    char route[47];
    int kms;
};

int main()
{
    struct Driver d1,d2,d3;
    {
        printf("Enter the details of the drivers:\n");
        printf("Enter the name of first driver\n");
        scanf("%s", &d1.name);

        printf("Enter the dlno of first driver\n");
        scanf("%s", &d1.dlNo);

        printf("Enter the route of the first driver\n");
        scanf("%s", &d1.route);

        printf("Enter the kms of the first driver\n");
        scanf("%d", &d1.kms);

        printf("Enter the name of second driver\n");
        scanf("%s", &d2.name);

        printf("Enter the dlno of second driver\n");
        scanf("%s", &d2.dlNo);

        printf("Enter the route of the second driver\n");
        scanf("%s", &d2.route);

        printf("Enter the kms of the second driver\n");
        scanf("%d", &d2.kms);

        printf("Enter the name of third driver\n");
        scanf("%s", &d3.name);

        printf("Enter the dlno of third driver\n");
        scanf("%s", &d3.dlNo);

        printf("Enter the route of the third driver\n");
        scanf("%s", &d3.route);

        printf("Enter the kms of the third driver\n");
        scanf("%d", &d3.kms);

    };

    printf("\n\n\n\n\t\t**************************** Drivers Details ***************************\n\n");
    printf("For Drivers No.1:\nName is %s\n", d1.name);
    printf("DL number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    printf("For Drivers No.2:\nName is %s\n", d2.name);
    printf("DL number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);

    printf("For Drivers No.3:\nName is %s\n", d3.name);
    printf("DL number is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);
  

    return 0;
}

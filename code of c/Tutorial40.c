#include <stdio.h>
#include <string.h>

int fabbo(int n);
struct student
{
    char Name[50];
    int Age;
    char Branch[20];
    int Semester;
};

enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
};

typedef struct teacher
{
    char Name[50];
    int Age;
    char Branch[20];
    int Semester;
} stu;

enum calculate
{
    sum,
    difference,
    product,
    quoitent
};

void Fibonacciseries(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d", t1, t2);

    for (int i = 1; i <= n - 2; ++i)
    {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main()
{
    // initilization of Structure
    struct student x = {"Amlesh", 18, "CSE", 2};
    printf("My Name is %s\n", x.Name);
    printf("I am %d years old.\n", x.Age);
    printf("I am Student of %s branch.\n", x.Branch);
    printf("I am in %d Semester.\n", x.Semester);

    // initialization of enum variables
    enum direction dir = NORTH;
    printf("%d\n", dir);
    dir = 3;
    printf("%d\n", dir);

    // initilization of typedef
    stu y = {"Shivam", 18, "CSE", 2};
    printf("My Name is %s\n", y.Name);
    printf("I am %d years old.\n", y.Age);
    printf("I am Student of %s branch.\n", y.Branch);
    printf("I am in %d Semester.\n", y.Semester);

    // initilization default values
    printf("%d\n", sum);
    printf("%d\n", difference);
    printf("%d\n", product);
    printf("%d\n", quoitent);

    // Fibonacci Series
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Please enter a number greater than or equal to 2.\n");
    }
    else
    {
        Fibonacciseries(n);
    }

    return 0;
}
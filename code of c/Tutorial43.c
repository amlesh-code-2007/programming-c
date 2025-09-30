#include <stdio.h>

struct
{
    char *name;
    int age;
    int Salary;
} emp1, emp2;

int manager()
{
    struct
    {
        char *name;
        int age;
        int Salary;
    } manager;

    manager.age = 32;

    if (manager.age > 30)
        manager.Salary = 65000;
    else
        manager.Salary = 55000;
    return manager.Salary;
}

int main()
{
    printf("Enter the Salary of employee1: ");
    scanf("%d", &emp1.Salary);
    printf("Enter the salary of employee2: ");
    scanf("%d", &emp2.Salary);
    printf("Employee 1 Salary is: %d\n", emp1.Salary);
    printf("Employee 2 Salary is: %d\n", emp2.Salary);
    printf("Manager's salary is: %d\n", manager());

    return 0;
}
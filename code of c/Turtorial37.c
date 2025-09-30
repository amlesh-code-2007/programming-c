#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
struct student Amlesh,Akash,Aditya;

int main()
{
    Amlesh.id = 1;
    Akash.id = 2;
    Aditya.id = 3;
    Amlesh.marks = 776;
    Akash.marks = 748;
    Aditya.marks = 709;
    Amlesh.fav_char = 'a';
    Akash.fav_char = 'b';
    Aditya.fav_char = 'c';
    strcpy( Amlesh.name," Amlesh is a student of g.p tekari, gaya" );
    strcpy( Akash.name," Akash is a very intelligent student in c.s.e branch in g.p tekari, gaya");
    strcpy( Aditya.name," Aditya is a cr of c.s.e branch in g.p tekari, gaya");
    printf(" Amlesh got %d marks\n", Amlesh.marks);
    printf(" Amlesh's name is : %s\n", Amlesh.name);
    printf(" Akash got %d marks\n", Akash.marks);
    printf(" Akash's name is : %s\n", Akash.name);
    printf(" Aditya got %d marks\n", Aditya.marks);
    printf(" Aditya's name is : %s\n", Aditya.name);
    return 0;
}


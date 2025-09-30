#include <stdio.h>

int main()
{
    int number,highscore;
    printf("enter your fav number\n");
    scanf("%d", &number);

    printf("enter your fav player highscore\n");
    scanf("%d", &highscore);

    switch (number)
    {
    case 45:
        printf("this is a fav num of Murari\n");
        switch (highscore)
        {
        case 264:
            printf(" This score against srilanka by Ro-hit man sharma ");
            break;

        case 209:
            printf(" This score against Australia by Ro-hit man sharma ");
            break;
        
        default:
            printf(" In this match rohit hits 22 sixes against Sirlanka");
        }
        break;
    
    case 18:
        printf(" this is a fav num of Shivam\n");
        switch (highscore)
        {
        case 183:
            printf(" this score against pakistan by king kholi");
            break;

        case 76:
            printf(" this score against south africa in t20 final 2024");
            break;
        
        default:
            printf(" In this match virat hits 23 fours against pakistan");
        }
        break;

    case 33:
        printf(" this is a fav num of Adi\n");
        switch (highscore)
        {
        case 78:
            printf(" this score against pakistan by kungfu pandya");
            break;

        case 43:
             printf(" this score against austrailia by kungfu pandya");
             break;

        default:
            printf(" In this match hardik vs pakistan");
        }
        break;

    case 23:
        printf("this is a fav num of Aayu\n");
        switch (highscore)
        {
        case 156:
            printf(" this score against England by sikhar dhawan");
            break;

        case 126:
            printf(" this score against newzeland by sikhar dhawan");
            break;
    
        default:
            printf(" his nick name is gabbar");
        }
        break;
        
    default:
        printf(" i am love cricket > my life ");
    }
    return 0;
}

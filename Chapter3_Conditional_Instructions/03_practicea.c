#include <stdio.h>

int main()
{
    int marks;
    printf("Please type your marks between 0-100 :\n");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0)
    {
        printf("Don't be smarter, enter b/w 0-100");
        
    }
    else
    {
        switch (marks / 10)
        {
        case 10:
        case 9:
            printf("Your grade is A");
            break;
        case 8:
            printf("Your grade is B");
            break;
        case 7:
            printf("Your grade is C");
            break;
        case 6:
            printf("Your grade is D");
            break;

        default:
            printf("Your grade is E");
            break;
        }
    }
    return 0;
}
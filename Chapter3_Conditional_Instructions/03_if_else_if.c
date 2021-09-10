// Program to check multiple conditions.

# include<stdio.h>

int main()
{
    
    int num;

    printf("Enter the value of num:\n");
    scanf("%d",&num);  
    if (num==1)
    {
        printf("Num is 1");
    }
    else if (num==2)
    {
        printf("Num is 2");
    }
    else if (num==3)
    {
        printf("Num is 3");
    }
    else
    {
        printf("Num is not 1,2 or 3");
    }

    return 0;
}

// Operator precedence including logical operators.

// 1) !
// 2) *,/,%
// 3) +,-
// 4) <, >,<=, >=
// 5) ==, !=
// 6) &&
// 7) ||
// 8) =

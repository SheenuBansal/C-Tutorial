// Conditional Operators 
/* Shorthand if else statement can be written using conditional or ternary operators. */

# include<stdio.h>

int main()
{
    int a;
    printf("Enter value of a:\n");
    scanf("%d",&a);

    (a>80) ? printf("A is greater than 80") : printf("A is not greater than 80");
    return 0;
}

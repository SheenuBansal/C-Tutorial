# include<stdio.h>

// Calculating Area of Rectangle by taking user input

int main()
{
    int length;
    int breadth;

    printf("Enter value of length:");
    scanf("%d",&length);
    printf("Enter value of breadth:");
    scanf("%d",&breadth);

    printf("Area of Rectangle is: %d", length*breadth);
    
    return 0;
}
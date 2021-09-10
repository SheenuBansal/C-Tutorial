// "=" in C is assignment operator , whereas "==" is quality check operator.

// Look at below program 

# include<stdio.h>

int main() 
{
    int age ;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if (age%2==0)
    {
        printf("%d is even\n",age);
    }
    
    else
    {
        printf("%d is odd\n",age);
    }

    // Following block of code is executed for whatever vaue of age, 
    // because it is assigning value to age , not doing check.
    // so BE CAREFUL

    if (age=50)
    {
        printf("reached half century");
    }

    return 0;
}
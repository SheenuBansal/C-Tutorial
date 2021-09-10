# include<stdio.h>

int main()
{
    float a=3.12, b,c;
    b=c=a;
    printf("Value of a is: %f\n",a);
    printf("Value of b is: %f\n",b);
    printf("Value of c is: %f\n",c);
    
    return 0;
}

// Illegal code

// int main()
// {
//     float b= a+ 2.5; // Will throw error, because it will not recognize a, code runs line by line .
//     float a;
//     printf("Vaue of a is: %f\n",a);
//     printf("Value of b is: %f\n",b);
    
//     return 0;
// }

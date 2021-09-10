// Left to right associativity is followed

// BODMAS is not followed in C
// ist precedence = "*" or "/" or "%"
// 2nd precedence = "-" or "+"
// 3rd precedence = "="

// 8*3 / 2*3 = 24/6 = 4 by BODMAS , which is wrong value by C programs
// C evaluates it like 24/2*3 = 12*3=36

// PROGRAM to show operator precedence.
// # include<stdio.h>

// int main()
// {
//     int a=8,b=3;
    
//     float calc_value= 5*a/4*9;
//     printf("value of given expression is %f",calc_value);
//     return 0;
// }

// NOTES :

// int x; y=x;  // Throws error, u can write like int x; int y=x; or int x, y=x .... These wont throw error
// int c = 3^3 // It is valid , bcz its XOR operator in C, but it wont calculate exponent and gives 1 or 0 based on xor
// char n="24 dec 2020" // Invalid bcz u can store only one letter in char 
// Default data type taken by most programs is double instead of float, we simply say float to teach easily.

// Program to show whether a number is divisible by say 76, without using control statements.

# include<stdio.h>

int main()
{
    int a;
    printf("Enter some number whose divisibility you want to check by 76: ");
    scanf("%d",&a);
    printf("\nDivisibility is returning: %d", a % 76);

    return 0;
}
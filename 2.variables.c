#include <stdio.h>

int main()
{
    int a = 42;
    int b = 7.8; // Not recommended
    float c = 9.2;
    char d = 'M';
    int e = 13;
    printf("The value of a is %d", a);
    printf("\nThe value of float c is %f", c);
    printf("\nThe value of char d is %c", d);
    printf("\nThe value of sum of a and b is %f", a + b); // Not correct integer and float sum
    printf("\nThe value of sum of a and e is %d", a + e);

    return 0;
}
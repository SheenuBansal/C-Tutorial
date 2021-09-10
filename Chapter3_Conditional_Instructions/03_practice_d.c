// Check whether a given character is lowercase or not
// Lowercase values are from 97-122 in ascii table

# include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
        {
            printf("Entered character is lowercase");
        }
    else
        {
            printf("Entered character is not lowercase");
        }

    return 0;
}
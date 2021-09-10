// Find greatest number out of given four numbers

#include <stdio.h>

int main()
{
    int first_no, second_no, third_no, fourth_no;
    printf("Enter first number: \n");
    scanf("%d", &first_no);
    printf("Enter second number: \n");
    scanf("%d", &second_no);
    printf("Enter third number: \n");
    scanf("%d", &third_no);
    printf("Enter fourth number: \n");
    scanf("%d", &fourth_no);

    if (first_no >= second_no && first_no >= third_no && first_no >= fourth_no)
    {
        printf("Greatest number is: %d",first_no);
    }

    else if (second_no >= first_no && second_no >= third_no && second_no >= fourth_no)
    {
        printf("Greatest number is: %d",second_no);
    }
    else if (third_no >= first_no && third_no >= second_no && third_no >= fourth_no)
    {
        printf("Greatest number is: %d",third_no);
    }

    else
    {
        printf("Greatest number is: %d",fourth_no);
    }
    return 0;
}


// If we use Nested if and else if, it would become complex.
// high chances of missing some conditions to be checked.

// int main()
// {
//     float first_no, second_no, third_no, fourth_no;
//     printf("Enter first number: \n");
//     scanf("%f", &first_no);
//     printf("Enter second number: \n");
//     scanf("%f", &second_no);
//     printf("Enter third number: \n");
//     scanf("%f", &third_no);
//     printf("Enter fourth number: \n");
//     scanf("%f", &fourth_no);

//     if (first_no > second_no)
//     {
//         if (first_no > third_no)
//         {
//             if (first_no > fourth_no)
//             {
//                 printf("first number is greatest: %f",first_no);
//             }
//             else
//             {
//                 printf("fourth number is greatest %f",fourth_no);
//             }
//         }
//         else if (third_no > fourth_no)
//         {
//             printf("third number is greatest %f",third_no);
//         }

//         else 
//         {
//             printf("fourth number is greatest %f",fourth_no);
//         }
//     }

//     else if (second_no > third_no)
//     {
//         if (second_no > fourth_no)
//         {
//             printf("second number is greatest %f",second_no);
//         }
//         else
//         {
//             printf("fourth number is greatest %f",fourth_no);
//         }
//     }

//     else if (third_no > fourth_no)
//     {
//         printf("third number is greatest %f",third_no);
//     }

//     else
//     {
//         printf("fourth number is greatest %f",fourth_no);
//     }

//     return 0;
// }

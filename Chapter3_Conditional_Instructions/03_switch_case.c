// Application : When we have to make a choice between number of alternatives for a given variable.

// value of integer expression is matched against c1,c2,c3.... if it matches any of cases
// that case along with all subsequent cases get executed.
// So we have to write break statement there.

// switch (integer expression)
// {
// case c1 :
//     /* code */
//     break;
// case c2 :         // where c2, c1 is  constant-expression
//     /* code */
//     break;

// default:
//     break;
// }

# include<stdio.h>

int main()
{
    int rating;
    printf("Please give your rating from 1-5:\n");
    scanf("%d",&rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1");
        break;
    case 2:
        printf("Your rating is 2");
        break;
    case 3:
        printf("Your rating is 3");
        break;
    case 4:
        printf("Your rating is 4");
        break;
    case 5:
        printf("Your rating is 5");
        break;
    
    default:
        printf("Invalid Rating Value !!");
        break;
    }
    return 0;
}
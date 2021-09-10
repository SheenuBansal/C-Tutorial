// Find if student is passed or fail, he shud get atleast 40% average and min 33% in every subject

#include <stdio.h>

int main()
{
    int english,hindi,punjabi;
    float total;
    printf("Enter percentage of english marks:\n");
    scanf("%d", &english);
    printf("Enter percentage of hindi marks:\n");
    scanf("%d", &hindi);
    printf("Enter percentage of punjabi marks:\n");
    scanf("%d", &punjabi);

    total =(english+hindi+punjabi)/3 ;
    if (total < 40 || english < 33 || hindi<33 || punjabi<33)
    {
        printf("You got %f only, so you are fail.",total);
        
    }
    else
    {
        printf("Congratulations !! You got passed.");
    }

    return 0;
}
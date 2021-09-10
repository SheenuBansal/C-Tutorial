// Calculate Tax payable by employee on income
// If income is less than 2.5L >> no tax 
// If income is between 2.5L to 5L >> 5%
// If income is between 5L to 10L >> 20%
// If income is greater than 10L >> 30%

# include<stdio.h>

int main()
{
    float tax=0,income;
    printf("Enter your income: \n");
    scanf("%f",&income);

    if (income>250000 && income<=500000)
        {
            tax += 0.05*(income-250000);
            printf("You have to pay tax of: %f\n",tax);
        }
    else if (income>500000 && income<=1000000)
        {
            tax += 0.20*(income-500000);
            printf("You have to pay tax of: %f\n",tax);
        }
    else if (income>1000000)
        {
            tax += 0.30*(income-1000000);
            printf("You have to pay tax of: %f\n",tax);
        }
    else
        {
            printf("You have to pay tax of 0");
        }

    return 0;
}
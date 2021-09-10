# include<stdio.h>

// Find Simple Interest

int main()
{
    float principal=45200,rate=3,time=4;
    float simpleInterest = (principal*rate*time) /100;

    printf("Value of simpleInterest is: %f",simpleInterest);
    return 0;
}
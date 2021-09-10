# include<stdio.h>

int main()
{
    
    int age;
    
    int vipPass=0;
    vipPass=1;

    printf("Enter your age:\n");
    scanf("%d",&age);  
    if ((age>=18 || age<=70 ) || vipPass==1)
    {
        printf("You can drive");
    }
    else
    {
        printf("You can't drive");
    }

    return 0;
}
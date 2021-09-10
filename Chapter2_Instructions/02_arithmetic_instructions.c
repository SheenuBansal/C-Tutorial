# include<stdio.h>
# include<math.h>

int main()
{
    int a=3;
    int b=8;
    int z= b*a;
    // b*a = z; // Illegal will throw error
    printf("Value of z is: %d\n",z);
    printf("value of a to the power b is %f",pow(a,b));
    return 0;

}
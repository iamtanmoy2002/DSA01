#include<stdio.h>
int pow2(int num1,int num2)
{
    if (num2==0)
    {
        return 1;
    }
    else
    {
        return num1*pow2(num1,num2-1);
    }
}

int main()
{
    int n1,n2;
    printf("enter the base and then enter the power: \n");
    scanf("%d %d",&n1,&n2);
    int c=pow2(n1,n2);
    printf("%d",c);
    return 0;
}
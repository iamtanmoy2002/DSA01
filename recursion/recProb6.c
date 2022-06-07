#include<stdio.h>
double bactCount(int num)
{
    double sum = 0;
    if(num==0)
    {
        return 1;
    }
    else
    {
        sum=sum+bactCount(num-1)*2;
        return sum;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("the number of bact of day %d will be : %.2lf",n,bactCount(n));
    return 0;
}
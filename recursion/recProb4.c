#include<stdio.h>
int pow2(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return 2*pow2(num-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int c=pow2(n);
    printf("%d",c);
    return 0;
}
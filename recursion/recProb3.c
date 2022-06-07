#include<stdio.h>
int fibo(int num)
{
    if (num==1)
    {
        return 0;
    }
    else if (num==2)
    {
        return 1;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=fibo(n);
    printf("%d",c);
    return 0;
}
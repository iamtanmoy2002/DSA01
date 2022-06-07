#include<stdio.h>
int rec(int n)
{
    int sum=0;
    if (n==0)
    {
        return ;
    }
    else
    {
        sum=n+rec(n-1);
        return sum;
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=rec(n);
    printf("%d",c);
    return 0;
}
#include<stdio.h>
int fact(int a)
{
    
    if (a==0)
    {
        return 1;
    }
    else
    {
        
        return a*fact(a-1);
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=fact(n);
    printf("%d",c);
    return 0;
}
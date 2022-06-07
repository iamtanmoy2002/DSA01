#include<stdio.h>
int namePrint(int num)
{
    if (num==0)
    {
        return ;
    }
    
    printf("Tanmay\n");
    namePrint(num-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    
    printf("%d",namePrint(n));
    return 0;
}
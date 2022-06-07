#include <stdio.h>
int main()
{
    int n,result;
    printf("enter the number of element");
    scanf("%d", &n);
    float arr[100], sum=0,large=0;

    while (n > 100 || n < 1)
    {
        printf("error! ente again\n");
    }
    printf("now enter the numbers ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    
    printf("%.2f", large);
}
#include<stdio.h>
typedef struct
{
    float inch;
    int feet;

}dist;
int main()
{
    dist d1,d2,sum;
    printf("enter feet of 1st measurement : ");
    scanf("%d",&d1.feet);
    
    printf("enter inch of 1st measurement : ");
    scanf("%f",&d1.inch);
    printf("\n");

    printf("enter feet of 2nd measurement : ");
    scanf("%d",&d2.feet);
    
    printf("enter inch of 2nd measurement : ");
    scanf("%f",&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

    while (sum.inch >= 12.0)
    {
      sum.inch = sum.inch - 12.0;
      ++sum.feet;
    }
    printf("\nsum = %d' %.2f''",sum.feet,sum.inch);
    return 0;

}
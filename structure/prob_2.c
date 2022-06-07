#include<stdio.h>
#include<string.h>
#define n 2
typedef struct 
{
    char name[100];
    int roll;
    float cgpa;
}st;

int main()
{
    st s[n];
    int i;
    printf("Enter the info : \n");
    for (i = 0; i <n ; i++)
    {
       
        
        printf("enter name : ");
        scanf("%s",&s[i].name);
        printf("\n");
        printf("Enter roll : ");
        scanf("%d",&s[i].roll);
        printf("\n");
        printf("Enter cgpa : ");
        scanf("%d",&s[i].cgpa);
        printf("\n");
        
    }
    printf("showing the info : \n\n");
    
    for ( i = 0; i < n; i++)
    {
        printf("name : %s",s[i].name);
        printf("\n");
        printf("roll : %d",s[i].roll);
        printf("\n");
        printf("marks : %d",s[i].cgpa);
        printf("\n\n");
    }
    
    
    return 0;
}
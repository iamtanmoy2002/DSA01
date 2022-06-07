
#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[30];
    unsigned int roll;
    unsigned short age;
}std;
int main()
{
    std s[50];
    char dummy[20];
    int n,i;
    printf("\nEnter the number of students ");
    fgets(dummy,sizeof(dummy),stdin);
    sscanf(dummy,"%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of the student");
            fgets(s[i].name,sizeof(s[i].name),stdin);
            s[i].name[strlen(s[i].name)-1]='\0';
        printf("\nEnter the age of the student");
            fgets(dummy,sizeof(dummy),stdin);
            sscanf(dummy,"%hi",&s[i].age);
        printf("\nEnter the roll of the student");
            fgets(dummy,sizeof(dummy),stdin);
            sscanf(dummy,"%u",&s[i].roll);
    }
    printf("\nDisplaying record");
    for(i=0;i<n;i++)
        printf("\nName-%s,\nAge-%hi,\nRoll-%u",s[i].name,s[i].age,s[i].roll);
}
#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    {
        s1.roll=19;
        s1.cgpa=9.4;
        strcpy(s1.name,"tanmay");
        printf("Student name %s \n",s1.name);
        printf("roll %d \n",s1.roll);
        printf("cgpa= %.2f",s1.cgpa);
    };
    
    return 0;
}
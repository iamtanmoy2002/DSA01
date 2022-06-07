#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char grade;
    int marks;
} info;

int main()
{
    int size, i;
    printf("Enter the number of students :");
    scanf("%d", &size);
    info *arr;
    info temp;
    char buffer;
    arr = (info*)malloc(size * sizeof(info));
   

    for (i = 0; i < size; i++)
    {
        printf("Enter the marks of student %d :", i + 1);
        scanf("%d", &temp.marks);

        scanf("%c", &buffer);

        printf("Enter the grade of student %d :", i + 1);
        scanf("%c", &temp.grade);

        arr[i] = temp;
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Marks of student %d = %d and grade = %c\n\n", i + 1, temp.marks, temp.grade);
    }
    return 0;
}
#include<stdio.h>
typedef struct
{
    int key;
    int index;
    char ch;
    float fl;
} bag ;

int abcd;

bag func(int *arr,int size,int key)
{
    bag bag1;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            bag1.index=i;
            bag1.key=key;
            bag1.ch='A';
            bag1.fl=0.1;
        }
    }
    return bag1;
}

int main()
{
    int array[]={1,2,3,4,5};

    bag res;
    bag* pt;
    pt=&res;

    res=func(array,5,2);

    printf("The index is %d\n",res.index);
    printf("The key is %d\n",res.key);
    printf("The index is %c\n",res.ch);
    printf("The float is %.2f\n\n\n\n",res.fl);

    pt->key=3;
    pt->index=3;
    pt->ch='B';
    pt->fl=0.3;

    printf("The index is %d\n",res.index);
    printf("The key is %d\n",res.key);
    printf("The index is %c\n",res.ch);
    printf("The float is %.2f\n\n\n\n",res.fl);


    printf("The index is %d\n",pt->index);
    printf("The key is %d\n",pt->key);
    printf("The index is %c\n",pt->ch);
    printf("The float is %.2f\n\n\n\n",pt->fl);

}

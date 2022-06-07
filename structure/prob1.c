#include<stdio.h>
struct st 
{
    int key;
    int index;
};

struct st findKey(int arr[],int n,int key)
{
    struct st bag1;
    int i;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            bag1.index=i;
            bag1.key=key;
        }
        
        
    }
    return bag1;
    
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int key=5;
    struct st p ; 
    p=findKey(arr,6,key);
    
    printf("%d\n",p.index);
    printf("%d\n",p.key);
}
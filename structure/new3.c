#include <stdio.h>

int main() {
	// your code goes here
	int i,num;
	float fer;
	scanf("%d",&num);
	float arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		fer = ((arr[i] * 9 )/ 5) + 32;
		printf("%.2f\n",fer);
	}
	
	return 0;
}

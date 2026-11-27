/*W.A.C.P to find the smallest number within an array*/
#include<stdio.h>
int main()
{
	int a[100],n,i,min;
	printf("Enter the size of array:");
	scanf("%d" ,&n);
	printf("Enter array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d" ,&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Smallest number=%d" ,min);
	
	return 0;
	
}
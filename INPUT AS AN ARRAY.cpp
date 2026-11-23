/*W.A.C.P to take a input as an array and display input on the screen*/
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 elements:\n ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

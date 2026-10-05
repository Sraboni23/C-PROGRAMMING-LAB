/*W.A.C.P to count the digits of a whole number*/
#include <stdio.h>
int main()
{
	int n, count=0;
	printf("enter a whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("number of digits = %d",count);
	return 0;
}

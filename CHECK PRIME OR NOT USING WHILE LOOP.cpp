//w.a.c.p to check whether a number is prime or not first using while loop then using for loop//
#include <stdio.h>
int main()
{
	int n,i=2,count =0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<n)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
		i++;
	}
	if(n<=1)
	    printf("Not prime");
	else if (count==0)
     	printf("Prime number");
	else
	    printf("Not prime");
	return 0;
}

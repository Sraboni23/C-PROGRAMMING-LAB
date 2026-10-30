//w.a.c.p to check whether a number is prime or not using For loop//
#include <stdio.h>
int main()
{
	int n,i,count =0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
		
	}
	if(n<=1)
	    printf("Not prime");
	else if (count==0)
     	printf("Prime number");
	else
	    printf("Not prime");
	return 0;
}

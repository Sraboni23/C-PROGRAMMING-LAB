//W.A.C.P to check whether a number is perfect or not//
#include <stdio.h>
int main()
{
	int n,i=1, sum=0;
	printf("Enter a number :");
	scanf("%d,&n");
	
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum ==n && n>0)
	   printf("Perfect number");
	else
	   printf("Not perfect number");
	   
	   return 0;
}

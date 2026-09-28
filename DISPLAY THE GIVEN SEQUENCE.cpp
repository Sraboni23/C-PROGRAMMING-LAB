/*0,1,1,2,3,5,8...upto n terms. w.c.p to display the given sequence*/
#include<stdio.h>
int main()
{
	int n,i=1;
	int a=0,b=1,c;
	printf("enter n:");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		if(i<=6)
		printf("%d",i-1);
		else
		{
			c=a+b+6;
			printf("%d",c);
			a=b;
			b=c-6;
		}
		i++;
	}
	return 0;
}

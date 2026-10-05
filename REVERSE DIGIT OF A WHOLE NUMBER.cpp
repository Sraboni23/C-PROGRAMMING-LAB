/*W.A.C.P to reverse digit of a whole number*/
#include <stdio.h>
int main()
{
	int n, digit , reverse =0;
	printf("enter a whole number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit = n %10;
		reverse = reverse *10+digit;
		n=n/10;
	}
	printf("reverse number =%d",reverse);
	return 0;
}

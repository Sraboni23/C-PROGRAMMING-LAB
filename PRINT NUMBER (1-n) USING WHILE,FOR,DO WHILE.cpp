//W.A.C.P print number (1-n) using while , for, do while in that same programe//
#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter the value of n:");
	scanf("%d", &n);
	
	//using while loop
	printf("\nUsing while loop:\n");
	i = 1;
	while (i<=n)
	{
		printf("%d" , i);
		i++;
	}
	
	//using for loop
	printf("\n\nUsing for loop:\n");
	for (i = 1; i<= n; i++)
	{
		printf("%d" , i);
	}
	
	//using do-while loop
	printf("\n\nUsing do-while loop:\n");
	i = 1;
	do
	{
		printf("%d" , i);
		i++;
	} while (i <= n);
	
	return 0;
}

//W.A.C.P to check 1!/2+2!/4+3!/6+4!/8+..upto n terms//
#include <stdio.h>
int main()
{
	int n, i, j;
	long long fact;
	float sum =0;
	
	printf("Enter the number of terms:");
	scanf("%d" ,&n);
	
	for (i = 1; i<= n; i++)
	{
		fact = 1;
		for (j = 1; j<= i; j++)
		{
			fact = fact * j;
		}
		sum = sum + (float)fact / (2 * i);
	}
	printf("Sum of the series = %.2f", sum);
	return 0;
}

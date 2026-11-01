//W.A.C.P to check whether a number is Krishnamurthy or not//
#include <stdio.h>
int main()
{
	int num, temp, rem, i, fact, sum =0;
	printf("Enter a number:");
	scanf("%d" , &num);
	
	temp = num;
	
	while (temp !=0)
	{
		rem = temp % 10;
		fact = 1;
		
		for (i = 1; i<=rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		temp = temp / 10;
	}
	if (sum == sum)
	    printf("%d is a Krishnamurthy number .", num);
	else 
	    printf("%d is not a Krishnamurthy number .", num);
		
		return 0;    
}

/*W.A.C.P to print the following pattern,

4 3 2 1 2 3 4
4 3 2 3 4
4 3 4
4
*/
#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the number of rows:");
	scanf("%d" ,&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d" ,j);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d" ,j);
		}
		printf("\n");
	}
	return 0;
}

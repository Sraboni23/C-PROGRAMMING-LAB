/*write a c programe to find the sum of the following series 1!+3!+5!....upto n numbers*/
//1!=1
//3!=3*2*1=6
//5!=5*4*3*2*1=120
//upto n!

#include <stdio.h>
int main ()
{
	int i=1 , c=1, a=1,n;
	long int fact,sum=0;
	printf("enter the no of terms:");
	scanf("%d",&n);
	
	while(c<=n){
		i=1;
		fact=1;
		while(i<=a){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
	}
	printf("Sum of the numbers=%d");
	return 0;
}

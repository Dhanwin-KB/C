#include<stdio.h>
int main()
{
	int i,n,dig,sum;
	sum=0;
	dig=9;
	printf("Enter number of terms, n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d +",dig);
		dig=(dig*10)+9;
		sum=sum+dig;
	}
	printf("=%d",sum);
	return 0;
}
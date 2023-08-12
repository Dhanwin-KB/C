#include<stdio.h>
int main()
{
	int i,n,sum;
	sum=0;
	printf("Enter number of terms, n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i);
		sum=sum+(i*i);
	}
	printf("\nSum:%d",sum);
	return 0;
}
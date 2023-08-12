#include<stdio.h>
int main()
{
	int i,n;
	float sum;
	sum=0;
	printf("Enter number of terms, n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d/%d +",1,i);
		sum=sum+1/((float)i);
	}
	printf("=%f",sum);
	return 0;
}
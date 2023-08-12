#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,x,sum,temp;
	sum=0;
	j=3;
	printf("Enter number of terms, n:");
	scanf("%d",&n);
	printf("Enter value of x:");
	scanf("%d",&x);
	for(i=1;i<=n-1;i=i+1)
	{
		temp=temp+pow(x,j);
		j=j+2;
	}
	sum=x-temp;
	printf("\nSum:%d",sum);
	return 0;
}
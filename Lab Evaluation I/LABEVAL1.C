#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum;
	sum=0;
	n=0;
	clrscr();
	printf("Enter the number of natural numbers:");
	scanf("%d",&n);
	printf("\nThe first %d natural numbers:",n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum=sum+i;
	}
	printf("\nThe Sum of Natural Number upto %d terms: %d",n,sum);
	getch();
	return 0;
}

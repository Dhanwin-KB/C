#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,cube;
	cube=1;
	n=0;
	clrscr();
	printf("Enter number of terms, n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		printf("\nThe Number : %d It's Cube: %d",i,cube);
    }
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,p;
	p=1;
	n=0;
	clrscr();
	printf("Enter number of terms, n:");
    scanf("%d",&n);
    printf("Enter multiplier:");
    scanf("%d",&m)
	for(i=1;i<=n;i++)
	{
		p=m*i;
		printf("\n%d x %d = %d",m,i,p);
    }
	getch();
	return 0;
}

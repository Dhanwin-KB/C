#include<stdio.h>
int main()
{
	signed int temp;
	printf("Enter Temperature in *c:");
	scanf("%d",&temp);
    if (temp<0)
        {   printf("It's freezing!");   }
    else if (temp>=0 && temp<10)
        {   printf("It's very cold!");   }
    else if (temp>=10 && temp<=20)
        {   printf("It's cold!");   }
    else if (temp>=20 && temp<=30)
        {   printf("It's normal!");   }
	else if (temp>=30 && temp<=40)
        {   printf("It's hot!");   }
    else if (temp>40)
        {   printf("It's very hot!");   }
	return 0;
}
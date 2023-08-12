#include<stdio.h>
int main()
{
	int cid,units;
	char name[25];
	float price;
	price=0;
	printf("Enter Customer Id:");
	scanf("%d",&cid);
	fflush(stdin);
	printf("Enter Name:");
	scanf("%s",&name);
	fflush(stdin);
	printf("Enter Units consumed by Consumer:");
	scanf("%d",&units);
	fflush(stdin);
    if (units<=199)
        {   price=units*1.20;   }
    else if (units>200 && units<400)
        {   price=units*1.50;   }
    else if (units>=200 && units<400)
        {   price=units*1.80;   }
    else if (units<=600)
        {   price=units*2.00;   }
	printf("price=%f",price);
	return 0;
}
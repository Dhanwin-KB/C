#include<stdio.h>
int main()
{
	int cid,units,tax;
	char name[25];
	float price=100;
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
        {   price=units*1.20;
		    printf("\nRate: Rs 1.20 per unit");
		}
    else if (units>200 && units<400)
        {   price=units*1.50;   
			printf("\nRate: Rs 1.50 per unit");
		}
    else if (units>=200 && units<400)
        {   price=units*1.80;   
			printf("\nRate: Rs 1.80 per unit");
		}
    else if (units<=600)
        {   price=units*2.00;   
			printf("\nRate: Rs 2.00 per unit");
		}
	printf("\n******BILL******");
	printf("\nCustomer ID:%d",cid);
	printf("\nUnits Consumed:%d",units);
	printf("\nPrice:%.2f",price);
	if (price>400)
	{
		tax=(15*price)/100;
		price=price+tax;
		printf("\nPrice after Surcharge of 15 percent:%.2f",price);	
	}
	return 0;
}

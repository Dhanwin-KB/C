#include<stdio.h>
int main()
{
	int ch,p,p2;
    float area;
    printf("1.Area of Circle \n2.Area of Triangle \n3.Area of Rectangle\nEnter a choice:\n");
	scanf("%d",&ch);
	switch(ch)
    {
        case 1: 
            printf("Enter Radius:");
            scanf("%d",p);
            area=3.14*p*p;
            printf("Area: %f", area);
            break;
        case 2: 
            printf("Enter Base:");
            scanf("%d",p);
            printf("Enter Height:");
            scanf("%d",p2);
            area=(p*p2)/2;
            printf("Area: %f", area);
            break;
        case 3: 
            printf("Enter Length:");
            scanf("%d",p);printf("Enter Breadth:");
            scanf("%d",p2);
            area=p*p2;
            printf("Area: %f", area);
            break;
        default: 
            printf("Invalid Choice!"); 
            break;
    }
    getch();
	return 0;
}
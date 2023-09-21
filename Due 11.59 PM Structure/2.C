#include <stdio.h>
struct employee
{
    char name[25];
    float salary;
    int hoursofwork;
}e[10];
void main()
{
    int i;
    printf("Enter Employee Details :");
    for(i=0;i<10;i++)
    {
        printf("\nEnter the Employee [%d] Name : ",i+1);
        scanf("%s",e[i].name);
        printf("\nEnter the Employee [%d] Salary : ",i+1);
        scanf("%f",&e[i].salary);
        printf("\nEnter the Employee [%d] Work Hours :",i+1);
        scanf("%d",&e[i].hoursofwork);
        if(e[i].hoursofwork>=8 && e[i].hoursofwork<10)
        {
            e[i].salary=e[i].salary+50;
        }
        else if(e[i].hoursofwork>=10 && e[i].hoursofwork<12)
        {
            e[i].salary=e[i].salary+50;
        }
        else if(e[i].hoursofwork>=12)
        {
            e[i].salary=e[i].salary+150;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\nEmployee [%d] Name : %s",i+1,e[i].name);
        printf("\nEmployee [%d] Salary : %f",i+1,e[i].salary);
        printf("\nEmployee [%d] Work Hours : %d",i+1,e[i].hoursofwork);
    }
}

#include <stdio.h>
int main()
{
    int m;
    int *adr;
    printf("Enter m:");
    scanf("%d", &m);
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    adr=&m;
    printf("Now adr is assigned with the address of m.\n");
    printf("Address of pointer adr : %p\n", adr);
    printf("Content of pointer adr : %d\n", *adr);
    m = 10;
    printf("The value of m is assigned as 10.\n");
    printf("Address of pointer adr : %p\n", adr);
    printf("Content of pointer adr : %d\n", *adr);
    *adr = 5;
    printf("The pointer variable adr is assigned with the value 5 now.\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    return 0;
}
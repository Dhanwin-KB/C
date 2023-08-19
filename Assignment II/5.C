#include <stdio.h>
void comp(int *x, int *y)
{
    int g;
    if(*x>*y)
        g=*x;
    else
        g=*y;
    printf("%d is greater!\n",g);
}
int main()
{
    int x, y, *ptr1, *ptr2;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d", &y);
    printf("x=%d and y=%d\n", x, y);
    ptr1 = &x;
    ptr2 = &y;
    comp(ptr1, ptr2);
    return 0;
}

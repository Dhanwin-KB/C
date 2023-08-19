#include <stdio.h>
void add(int *x, int *y)
{
    int sum;
    sum= *x+*y;
    printf(“Sum:%d”,sum)
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
    printf("x=%d and y=%d\n", x, y);
    add(ptr1, ptr2);
    return 0;
}

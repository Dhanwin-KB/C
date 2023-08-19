#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
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
    printf("After swapping:\n");
    swap(ptr1, ptr2);
    printf("x=%d and y=%d\n", x, y);
    return 0;
}

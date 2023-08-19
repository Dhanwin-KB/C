#include <stdio.h>
int main()
{
    int x, y, sum;
    int *ptr1, *ptr2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    ptr1 = &x;
    ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf("Sum: %d\n", sum);
    return 0;
}
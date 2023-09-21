#include <stdio.h>
int rotate_left(int n, int d) 
{
    return (n << d) | (n >> (16 - d));
}
int rotate_right(int n, int d) 
{
    return (n >> d) | (n << (16 - d)) & 0xFFFF;
}
int main() 
{
    int N, D;
    printf("\nEnter the Number :");
    scanf("%d",&N);
    printf("\nEnter the Number of Times to Shift:");
    scanf("%d",&D);
    int left = rotate_left(N, D);  
    int right = rotate_right(N, D);
    printf("Rotated left: %d\n", left);  
    printf("Rotated right: %d\n", right);
    return 0;
}

#include <stdio.h>
void update(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i+1] < arr[i]) 
        {
            arr[i] = arr[i+1];
        } 
        else 
        {
            arr[i] = -1;
        }
    }
    arr[n-1] = -1;
}
int main() 
{
    int arr[25],n;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    update(arr, n);
    printf("Output Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
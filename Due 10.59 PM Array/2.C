#include <stdio.h>
void reverseSubArray(int arr[], int start, int end) 
{
    while (start < end) 
    {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}
void reverseGroups(int arr[], int N, int K) 
{
    int i = 0;
    while (i < N) 
    {
        int start = i;
        int end = i + K - 1;
        if (end >= N) 
        {
            end = N - 1;
        }
        reverseSubArray(arr, start, end);
        i += K;
    }
}
int main() 
{
    int arr1[25],n1,k1;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n1);
    printf("\nEnter the size of sub-array : ");
    scanf("%d",&k1);
    for(int i=0;i<n1;i++)
    {
        printf("\nEnter the element[%d]:",i+1);
        scanf("%d",&arr1[i]);
    }
    reverseGroups(arr1, n1, k1);
    printf("Output: ");
    for (int i = 0; i < n1; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    int arr2[25],n2,k2;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n2);
    printf("\nEnter the size of sub-array : ");
    scanf("%d",&k2);
    for(int i=0;i<n2;i++)
    {
        printf("\nEnter the element[%d]:",i+1);
        scanf("%d",&arr2[i]);
    }
    reverseGroups(arr2, n2, k2);
    printf("Output: ");
    for (int i = 0; i < n2; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

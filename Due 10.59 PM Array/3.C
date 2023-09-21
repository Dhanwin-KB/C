#include <stdio.h>
int equalitychk(int a[], int b[], int n) 
{
    int freq[1000] = {0}; 
    for (int i = 0; i < n; i++) 
    {
        freq[a[i]]++;
    }
    for (int i = 0; i < n; i++) 
    {
        freq[b[i]]--;
    }
    for (int i = 0; i < 1000; i++) 
    {
        if (freq[i] != 0) 
        {
            return 0; 
        }
    }
    return 1;
}
int main() 
{
    int n, a[25],b[25],i;
    printf("\nEnter the Number of Elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element[%d] of First Array:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the element[%d] of Second Array:",i+1);
        scanf("%d",&b[i]);
    }
    int result = equalitychk(a, b, n);
    if (result) 
    {
        printf("The arrays are equal.\n");
    } 
    else 
    {
        printf("The arrays are not equal.\n");
    }
    return 0;
}
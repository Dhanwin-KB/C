#include <stdio.h> 
int median(int a[], int b[], int n) 
{ 
    int merged[2*n]; 
    int i=0, j=0, k=0; 
    while (i < n && j < n)  
    { 
        if (a[i] <= b[j]) 
            merged[k++] = a[i++]; 
        else 
            merged[k++] = b[j++]; 
    } 
    while (i < n) 
        merged[k++] = a[i++]; 
    while (j < n) 
        merged[k++] = b[j++]; 
    if (k % 2 == 1)  
        return merged[k / 2]; 
    else  
        return (merged[(k - 1) / 2] + merged[k / 2]) / 2; 
} 
int main() 
{ 
    int i,n; 
    printf("Enter the size of the array A and B:"); 
    scanf("%d", &n); 
    int a[n], b[n]; 
    printf("Enter the elements of the array A:"); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
    printf("Enter the elements of the array B:"); 
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &b[i]); 
    } 
    int med = median(a, b, n); 
    printf("Median: %d\n", med); 
    return 0; 
} 
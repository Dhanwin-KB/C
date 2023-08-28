#include <stdio.h> 
int find(int a[], int n)  
{ 
    int total = (n + 1) * (n + 2) / 2;  
    for (int i = 0; i < n; i++)  
    { 
        total=total-a[i];  
    } 
    return total; 
} 
int main()  
{ 
    int n; 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
    int a[n]; 
    printf("Enter the elements of the array (without duplicates):\n"); 
    for (int i = 0; i < n; i++)  
    { 
        scanf("%d", &a[i]); 
    } 
    int missing = find(a, n); 
    printf("The missing number is: %d\n", missing); 
    return 0; 
} 
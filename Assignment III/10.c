#include<stdio.h> 
int missing(int a[],int n) 
{ 
    int totalsum= (n * (n + 1)) / 2; 
    int sum = 0; 
    for (int i = 0; i < n - 1; i++) 
    { 
        sum += a[i]; 
    } 
    int missingno = totalsum - sum; 
    return missingno; 
} 
int main() 
{ 
    int a[] = {1, 2, 5, 6, 3, 7, 8, 9, 10}, i;  
    int n = sizeof(a) / sizeof(a[0]) ;  
    for (i = 0; i < n; i++) 
    { 
        printf("%d ",a[i]); 
    } 
    int missingno = missing(a,n); 
    printf("\n\nThe missing number: %d\n", missingno); 
    return 0; 
} 
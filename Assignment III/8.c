#include<stdio.h> 
int missing(int a[], int n)  
{ 
    int i; 
    for(i = 0; i < n-1; i++) { 
        if(a[i+1] - a[i] > 1) { 
            return a[i] + 1; 
        } 
    } 
    return -1; 
} 
int main() 
{ 
    int a[] = {0, 1, 2, 3, 4, 5, 7, 9}; 
    int n = sizeof(a) / sizeof(a[0]); 
    int missed = missing(a, n); 
    printf("\nThe given array is: "); 
    for(int i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    } 
    if(missed!=-1)  
    { 
        printf("\nThe missing smallest element is: %d\n", missed); 
    }  
    else  
    { 
        printf("\nNo missing element found.\n"); 
    } 
    return 0; 
} 
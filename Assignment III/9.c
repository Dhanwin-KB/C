#include<stdio.h> 
void rotate(int a[10],int d,int n) 
{ 
    int temp[d]; 
    for (int i = 0; i < d; i++)  
    { 
        temp[i] = a[i]; 
    } 
    for (int i = d; i < n; i++)  
    { 
        a[i - d] = a[i]; 
    } 
    for (int i = 0; i < d; i++)  
    { 
        a[n - d + i] = temp[i]; 
    } 
} 
int main() 
{ 
    int i; 
    int a[] = {1, 2, 3, 4, 5}; 
    int d; 
    int n = sizeof(a) / sizeof(a[0]); 
    printf("Array before Rotation:\n"); 
    for (i = 0; i < n; i++)  
    { 
        printf("%d\t",a[i]); 
    } 
    printf("\nEnter the Value of 'd' (rotation factor):"); 
    scanf("%d",&d); 
    rotate(a, d, n); 
    printf("\nArray after Rotation :\n"); 
    for (i = 0; i < n; i++)  
    { 
        printf("%d\t", a[i]); 
    } 
    return 0; 
} 
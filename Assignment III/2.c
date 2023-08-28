#include <stdio.h> 
int main()  
{ 
    int a[10], n, i, temp, count[10]; 
    printf("Enter the number of elements for the array: "); 
    scanf("%d", &n); 
    for (i = 0; i < n; i++) 
    {    
        printf("Enter the element a[%d]: ", i); 
        scanf("%d", &a[i]); 
        count[i] = 0; 
    } 
    for (i = 0; i < n; i++) 
    { 
        printf("%d\t", a[i]); 
    } 
    for (i = 0; i < n; i++) 
    { 
        temp = a[i]; 
        for (int j = 0; j < n; j++) 
        { 
            if (temp == a[j]) 
            { 
                count[i] = count[i] + 1; 
            } 
        } 
    }    
for (i = 0; i < n; i++) 
    { 
        int duplicate = 0; 
        for (int j = 0; j < i; j++) 
        { 
            if (a[j] == a[i]) 
            { 
                duplicate = 1; 
                break; 
            } 
        } 
        if (!duplicate) 
        { 
            printf("\nElement %d appears %d times", a[i], count[i]); 
        } 
    } 
    return 0; 
} 
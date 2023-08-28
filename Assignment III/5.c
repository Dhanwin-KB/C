#include <stdio.h>  
int submax(int a[], int size)   
{   
    int current_sum = 0, maximum_sum = 0;   
    for (int i = 0; i < size; i++)   
    {   
        current_sum = current_sum + a[i];   
        if (current_sum > maximum_sum)   
           maximum_sum = current_sum;   
        if (current_sum < 0)   
           current_sum = 0;   
    }   
    return maximum_sum;   
}   
int main()   
{  
    int a[15], n, i, lsum; 
    printf("Enter the number of elements for the array: ");  
    scanf("%d", &n);  
    for(i = 0; i < n; i++)  
    {     
        printf("Enter the element a[%d]: ", i);  
        scanf("%d", &a[i]);  
    } 
    lsum = submax(a, n); 
    printf("Sum of the Largest Contiguous Sub-Array: %d", lsum); 
    return 0;  
} 
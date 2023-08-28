#include <stdio.h>  
int main()   
{ 
    int a[15],n,i,j,sum;  
    printf("Enter the number of elements for the array :");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {     
        printf("Enter the element a[%d]:",i);  
        scanf("%d",&a[i]);  
    }  
    for(i=0;i<n;i++)  
    {  
        printf("%d\t",a[i]);  
    } 
    printf("\nEnter the sum :");  
    scanf("%d",&sum); 
    printf("The pairs that add up to %d:",sum); 
    for(i=0;i<n;i++) 
    { 
        for(j=i+1;j<n;j++) 
        { 
            if((a[i]+a[j])==sum) 
            { 
                printf("(%d,%d)",a[i],a[j]); 

            } 
        } 
    } 
    return 0;  
} 
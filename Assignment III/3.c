#include <stdio.h>  
int main()   
{  
    int a[10],n,i;  
    printf("Enter the number of elements for the array :");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {     
        printf("Enter the element a[%d]:",i);  
        scanf("%d",&a[i]);  
    }  
    for(i=n-1;i>=0;i--)  
    {  
        printf("%d\t",a[i]);  
    }  
    return 0;  
} 
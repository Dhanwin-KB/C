#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    char str[100]; 
    char newstr[10][10];  
    int i,j,k; 
    printf("Enter a string:"); 
    gets(str);	 
    j=0; k=0; 
    for(i=0;i<=(strlen(str));i++) 
    { 
        if(str[i]==' '||str[i]=='\0') 
        { 
            newstr[k][j]='\0'; 
            k++; 
            j=0; 
        } 
        else 
        { 
            newstr[k][j]=str[i]; 
            j++; 
        } 
    } 
    printf("\n After split by space:\n"); 
    for(i=0;i < k;i++) 
        printf(" %s\n",newstr[i]); 
    return 0; 
} 
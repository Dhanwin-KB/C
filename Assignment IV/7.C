#include <stdio.h>   
#include <string.h>   
int main()   
{   
    char str[25]; 
    char ch; 
    printf("Enter the string:"); 
    gets(str); 
    printf("Enter the character you wish to replace blank spaces with:"); 
    scanf("%c",&ch); 
    for(int i = 0; i < strlen(str); i++) 
    {   
        if(str[i] == ' ')   
            str[i] = ch;  
    }   
    printf("String after replacing spaces with given character: \n");   
    printf("%s", str);   
    return 0;   
}  
#include <stdio.h> 
#include <string.h> 
void charremove(char *str)  
{ 
    int len = strlen(str); 
    int destIndex = 0; 
    for (int srcIndex = 0; srcIndex < len; srcIndex++) 
    { 
        if ((str[srcIndex] >= 'a' && str[srcIndex] <= 'z') || (str[srcIndex] >= 'A' && str[srcIndex] <= 'Z')) 
        { 
            str[destIndex] = str[srcIndex]; 
            destIndex++; 
        } 
    } 
    str[destIndex] = '\0'; 
} 
int main()  
{ 
    char str[100]; 
    printf("Enter a string: "); 
    scanf("%s", str); 
    charremove(str); 
    printf("\nString after removing non-alphabetic characters: %s\n", str); 
    return 0; 
} 
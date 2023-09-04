#include <stdio.h> 
#include <string.h> 
void insert(char *str, char ch, int pos)  
{ 
    int len = strlen(str); 
    if (pos < 0 || pos > len)  
    { 
        printf("invalid attempt : out of bounds\n"); 
        return; 
    } 
    for (int i = len; i >= pos; i--)  
    { 
        str[i + 1] = str[i]; 
    } 
    str[pos] = ch; 
} 
int main() 
{ 
    char str[100]; 
    char ch; 
    int position; 
    printf("Enter a string: "); 
    scanf("%s", str); 
    printf("Enter a character to insert: "); 
    scanf(" %c", &ch);  
    printf("Enter the position to insert: "); 
    scanf("%d", &position); 
    insert(str, ch, position); 
    printf("\nAfter Insertion: %s\n", str); 
    return 0; 
} 
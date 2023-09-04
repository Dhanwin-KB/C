#include <stdio.h> 
#include <string.h> 
void equalsplit(char *str, int n) 
{ 
    int len = strlen(str); 
    if (len % n != 0) 
    { 
        printf("Unable to divide the string into equal parts.\n"); 
        return; 
    } 
    int size = len / n; 
    int i, j; 
    for (i = 0; i < len; i++) 
    { 
        if (i % size == 0 && i != 0) 
            printf("\n"); // Start a new line for each part 
        printf("%c", str[i]); 
    } 
    printf("\n"); 
} 
int main() 
{ 
    char str[100]; 
    int n; 
    printf("Enter a string: "); 
    scanf("%s", str); 
    printf("Enter the number of equal parts: "); 
    scanf("%d", &n); 
    if (n <= 0) 
    { 
        printf("Invalid number of parts.\n"); 
        return 1; 
    } 
    printf("\nEqual parts of the string:\n"); 
    equalsplit(str, n); 
    return 0; 
} 
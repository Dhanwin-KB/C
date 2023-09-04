#include <stdio.h> 
#include <string.h> 
void swap(char *x, char *y)  
{ 
    char temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void generate(char *str, int start, int end)  
{ 
    if (start == end)  
    { 
        printf("%s\n", str); 
    }  
    else  
    { 
        for (int i = start; i <= end; i++) { 
            swap(&str[start], &str[i]); 
            generate(str, start + 1, end); 
            swap(&str[start], &str[i]); 
        } 
    } 
} 
int main()  
{ 
    char input[100]; 
    printf("Enter a string: "); 
    scanf("%s", input); 
    int length = strlen(input); 
    printf("Anagrams of %s are:\n", input); 
    generate(input, 0, length - 1); 
    return 0; 
} 
#include <stdio.h> 
#include <string.h> 
int vowel(char ch)  
{ 
    switch (ch)  
    { 
        case 'a': case 'e': case 'i': case 'o': case 'u': 
        case 'A': case 'E': case 'I': case 'O': case 'U': 
            return 1; 
        default: 
            return 0; 
    } 
} 
void reverse(char *str)  
{ 
    int l = 0; 
    int r = strlen(str) - 1; 
    while (l < r)  
    { 
        while (l < r && !vowel(str[l]))  
        { 
            l++; 
        } 
        while (l < r && !vowel(str[r]))  
        { 
            r--; 
        } 
        if (l < r)  
        { 
            char temp = str[l]; 
            str[l] = str[r]; 
            str[r] = temp; 
            l++; 
            r--; 
        } 
    } 
} 
int main() 
{ 
    char input[100]; 
    printf("Enter a string: "); 
    scanf("%s", input); 
    reverse(input); 
    printf("String with reversed vowels: %s\n", input); 
    return 0; 
} 
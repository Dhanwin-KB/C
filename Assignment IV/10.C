#include <stdio.h> 
#include <string.h> 
int palindrome(char *s, int begin, int end)  
{ 
    while (begin < end)  
    { 
        if (s[begin] != s[end])  
        { 
            return 0;  
        } 
        begin++; 
        end--; 
    } 
    return 1; 
} 
char* longest(char *s)  
{ 
    int len = strlen(s); 
    if (len <= 1)  
    { 
        return s;  
    } 
    int max = 1;  
    int begin = 0; 
    for (int i = 0; i < len; i++)  
    { 
        for (int j = i + 1; j < len; j++)  
        { 
            if (j - i + 1 > max && palindrome(s, i, j))  
            { 
                max = j - i + 1; 
                begin = i; 
            } 
        } 
    } 
    char *res = malloc((max + 1) * sizeof(char)); 
    strncpy(res, s + begin, max); 
    res[max] = '\0'; 
    return res; 
} 
int main()  
{ 
    char input[100]; 
    printf("Enter a string: "); 
    scanf("%s", input); 
    char *result = longest(input); 
    printf("Longest Palindromic Substring: %s\n", result); 
    free(result); 
    return 0; 
} 
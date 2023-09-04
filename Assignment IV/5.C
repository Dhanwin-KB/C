#include <stdio.h> 
int main()  
{ 
    char input[100]; 
    int freq[128] = {0}; 
    printf("Enter a string: "); 
    gets(input);  
    for (int i = 0; input[i] != '\0'; i++)  
    { 
        if (input[i] >= 0 && input[i] <= 127)  
        { 
            freq[input[i]]++; 
        } 
    } 
    printf("Character frequencies:\n"); 
    for (int i = 0; i < 128; i++)  
    { 
        if (freq[i] > 0)  
        { 
            printf("'%c' : %d times\n", i, freq[i]); 
        } 
    } 
    return 0; 
} 
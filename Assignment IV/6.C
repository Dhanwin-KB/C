#include<stdio.h> 
#include<ctype.h> 
int main() 
{ 
    char ch; 
    printf("Enter a character: "); 
    scanf( "%c", &ch ); 
    if(isdigit(ch)) 
        printf( "%c is a valid Hexadecimal Character",ch); 
    else 
        printf( "%c is not a valid Hexadecimal Character:",ch); 
    return 0; 
}
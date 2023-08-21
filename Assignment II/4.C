#include <stdio.h>
void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char *str, int l, int r) 
{
    if (l == r) 
    {
        printf("%s ", str);
        return;
    }
    for (int i = l; i <= r; i++) 
    {
        swap((str + l), (str + i));
        permute(str, l + 1, r);
        swap((str + l), (str + i)); 
    }
}
int main() 
{
    char input[] = "abcd";
    int length = sizeof(input) - 1; 
    printf("The permutations of the string are: ");
    permute(input, 0, length - 1);
    printf("\n");
    return 0;
}

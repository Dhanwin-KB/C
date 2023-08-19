#include <stdio.h>
int main()
{
    int len=0, i=0;
    char str[25], *ptr1, *ptr2;
    printf("Enter a string:");
    gets(str);
    while (str[i] != '\0')
    {
        len = len + 1;
        i++;
    }
    ptr1 = str + len - 1;
    printf("Reversed string: ");
    while (ptr1 >= str)
    {
        printf("%c", *ptr1);
        ptr1--;
    }
    return 0;
}
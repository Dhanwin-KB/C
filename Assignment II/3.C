#include <stdio.h>
int len(char *str)
{
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    return length;
}
int main()
{
    char str[25];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = len(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
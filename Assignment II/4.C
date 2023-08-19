#include<stdio.h>
#include<string.h>
void permu(char *str,int m, int n)
{
    int i,j;
    char tmp;
    for(i = m;i<n-1;++i)
    {
        for(j=i+1;j<n;++j)
        {
            tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
            permu(str,i+1,n);
            tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
        }
    }
    printf("%s\n",str);
}
int main()
{
    int i,n;
    char str[25];
    printf("Enter a string:");
    scanf("%s", str);
    while (str[i] != '\0')
    {
        n = n + 1;
        i++;
    }
    permu(str,0,n);
}

#include <stdio.h>
int length(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}
int main()
{
    int len;
    char str[100];
    printf("\n Enter the String : ");
    fgets(str, 100, stdin);
    len = length(str);
    printf("Length of the string = %d", len);

    return 0;
}
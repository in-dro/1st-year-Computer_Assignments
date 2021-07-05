#include <stdio.h>

void rev(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }

    printf("String after reversing : ");
    for (int i = count; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}
int main()
{
    char str[100];
    printf("Enter the String : ");
    fgets(str, 100, stdin);
    rev(str);
    return 0;
}
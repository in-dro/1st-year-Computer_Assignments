#include <stdio.h>
char c[100];
char *conc(char a[], char b[])
{
    int count1 = 0, count2 = 0, j, k;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        count2++;
    }
    for (j = 0, k = 0; j < count1 + count2; j++)
    {
        if (j < count1)
        {
            c[j] = a[j];
        }
        else
        {
            c[j] = b[k];
            k++;
        }
    }
    c[j] = '\0';
    return c;
}
int main()
{
    char str1[100], str2[100];
    char *p;
    printf("Enter the String 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    p = conc(str1, str2);
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        printf("%c", *(p + i));
    }
    return 0;
}
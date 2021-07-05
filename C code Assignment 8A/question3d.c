#include <stdio.h>

int cmp(char a[], char b[])
{
    int count1 = 0, count2 = 0, min;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        count2++;
    }
    min = (count1 <= count2) ? count1 : count2;

    for (int j = 0; j < min; j++)
    {
        if (a[j] != b[j])
        {
            int x;
            x = a[j] - b[j];
            return x;
        }
    }
    return 0;
}
int main()
{
    char str1[100], str2[100];
    int p;
    printf("Enter the String 1 : ");
    gets(str1);
    printf("Enter the String 2 : ");
    gets(str2);

    p = cmp(str1, str2);

    if (p == 0)
    {
        printf("The strings are similar.");
    }
    else
    {
        printf("The difference between the ASCII values of the two first-mismatching characters : %d", p);
    }
    return 0;
}
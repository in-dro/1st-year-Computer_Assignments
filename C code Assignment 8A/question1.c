#include <stdio.h>

int main()
{
    char str[100];
    int count = 0, flag = 0;
    printf("Enter a word : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }

    for (int i = 0; i < -count / 2; i++)
    {
        if (str[i] != str[count - i - 1])

        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\n Not a Pallindrome");
    }
        else
        {
            printf(" \n Pallindrome Word");
        }
        return 0;
    }
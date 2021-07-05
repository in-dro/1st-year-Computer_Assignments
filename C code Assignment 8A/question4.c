#include <stdio.h>

int main()
{
    int i, j, k, l;
    int readIndex = 0, writeIndex;
    char str[100],NewStr[100];
    printf("Enter the full name : ");
    gets(str);

    //Removing Extra Spaces
    for (writeIndex = 0; str[readIndex] != '\0'; readIndex++)
    {
        if (str[readIndex] == ' ' && str[readIndex - 1] == ' ')
        {
            continue;
        }
        NewStr[writeIndex] = str[readIndex];
        writeIndex++;
    }
    NewStr[writeIndex] = '\0';
    
    printf("%c.", NewStr[0]);     //Printing first initial

    for (i = 0; NewStr[i] != '\0'; i++)   //FInding the space index before surname
    {
        if (NewStr[i] == ' ')
        {
            k = i;
        }
    }

    for (i = 0; i < k; i++)   //Printing Middle names
    {

        if (NewStr[i] == ' ')
        {
            printf("%c.", NewStr[i + 1]);
        }
    }

    while (NewStr[k])  //Printing Surnames 
    {
        printf("%c", NewStr[k++]);
    }

    return 0;
}

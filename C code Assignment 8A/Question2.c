#include <stdio.h>
int main()
{
    char str[100], ModifiedStr[100];
    int readIndex = 0, writeIndex;
    printf("Enter a String : ");
    gets(str);

    for (writeIndex = 0; str[readIndex] != '\0'; readIndex++)
    {
        if (str[readIndex] == ' ' && str[readIndex - 1] == ' ')
        {
            continue;
        }
        ModifiedStr[writeIndex] = str[readIndex];
        writeIndex++;
    }
    ModifiedStr[writeIndex] = '\0';
    printf("String without extra spaces\n%s", ModifiedStr);
    return 0;
}
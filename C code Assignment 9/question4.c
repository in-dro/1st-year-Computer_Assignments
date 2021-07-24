#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    char path[100];
    char ch;
    int characters, words, lines;

    printf("Enter source file path: ");
    scanf("%s", path);

    file = fopen(path, "r");

    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    characters = words = lines = 0;

    printf("Contents of the file : \n\n");
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c",ch);
        characters++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("\n\n");
    printf("Total characters = %d\n",
           characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    fclose(file);
    return 0;
}
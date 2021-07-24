#include <stdio.h>

int func(char *original)
{
    int val1, a;
    FILE *original_open;
    int write_at, read_at;

    original_open = fopen(original, "r+");
    if (original_open == 0)
    {
        printf("unable to open file %s\n", original);
    }
    write_at = read_at = 0;

    printf("Choose an option : \n1.Encrypt\n2.Decrypt\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        while ((val1 = fgetc(original_open)) != EOF)
        {
            read_at = ftell(original_open);
            fseek(original_open, write_at, SEEK_SET);
            fputc(val1 + 3, original_open);
            write_at = ftell(original_open);
            fseek(original_open, read_at, SEEK_SET);
        }
        printf("Contents of file after encryption : ");
        break;
    case 2:
        while ((val1 = fgetc(original_open)) != EOF)
        {
            read_at = ftell(original_open);
            fseek(original_open, write_at, SEEK_SET);
            fputc(val1 - 3, original_open);
            write_at = ftell(original_open);
            fseek(original_open, read_at, SEEK_SET);
        }
        printf("Contents of file after decryption : ");
        break;
    default:
        break;
    }

    fclose(original_open);
    return (0);
}

int main(void)
{
    FILE *fps;
    char ch;
    func("./encrypt.txt");

    fps=fopen("encrypt.txt","r");

    while ((ch = fgetc(fps)) != EOF)
    {
        printf("%c",ch);
    }
    return 0;
}

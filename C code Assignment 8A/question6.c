#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter a string : ");
    gets(str);

    for(int i=0; str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
        {
            if(i==0 || str[i-1]==' ')
            {
                if(str[i]>=97 && str[i]<=122)
                {
                    str[i]-=32;
                }
            }
            else
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i]+=32;
                }
            }
        }
    }

    printf("Title Case : ");
    puts(str);
    return 0;
}


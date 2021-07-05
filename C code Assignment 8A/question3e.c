#include<stdio.h>

void copy(char a[], char b[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }

    b[i]='\0';
}

int main()
{
    char str1[100],str2[100];
    char *p;
    printf("Enter the String 1 : ");
    gets(str1);

    copy(str1,str2);

    printf("String After copying : ");
    printf("%s",str2);
    
    return 0;

}
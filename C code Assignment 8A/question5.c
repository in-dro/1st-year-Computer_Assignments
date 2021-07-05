#include <stdio.h>
#include <string.h>

void sum(char s1[], char s2[])
{
    int num1=0, num2=0, len=0,sum=0,dig;
    char str[100];
    
    int i=0,k=0;
    while(s1[i]!='\0')
    {
        if(s1[i]>='0' && s1[i]<='9')
        {num1 = num1 * 10 + (s1[i]) - '0';}
        else
        {break;}
        i++;
    }
    for (i = 0; s2[i]!='\0'; i++)
    {
        if(s1[i]>='0' && s1[i]<='9')
        {num2=num2*10+ s2[i] - '0';}
        else
        {break;}
        
    }

    sum=num1+num2;

    while(sum>0)
    {
        dig=sum%10;
        sum/=10;
        str[k++]=dig+ '0';
    }
    str[k]='\0';

    

    for(int j=0;str[j]!='\0';j++)
    {
        len++;
    }
    
    printf("Sum of the numbers(Printed as string) : ");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
}
int main()
{
    char str1[1000];
    char str2[1000];
    printf("Please enter number 1 (as string): ");
    fflush(stdin);
    gets(str1);
    printf("Enter number 2 (as string) : ");
    fflush(stdin);
    gets(str2);
    sum(str1, str2);
    return 0;
}
#include<stdio.h>
int main()
{
    char x,flag='q';

    do{
        printf("Enter a character :");
        fflush(stdin);
        scanf("%c",&x);

        int z;
        z=x;

        printf("ASCII Value : %d",z);
        printf("\nPress q to terminate:");
        fflush(stdin);
        scanf("%c",&flag);
    }while(flag!='q');

    return 0;
}
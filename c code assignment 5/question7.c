#include<stdio.h>

int main()
{
    int low,high;
    printf("Enter Lower Range :");
    scanf("%d",&low);
    printf("Enter Higher Range : ");
    scanf("%d",&high);

    for(int i=low;i<high;i++)
    {
        int num,dig,arm=0;
        num=i;
        while (num>0)
        {
          dig=num%10;
          num=num/10;
          arm=arm+(dig*dig*dig); 
        }

        if(arm==i)
        {
            printf("%d\t",arm);
        }
        
    }

    return 0;
}
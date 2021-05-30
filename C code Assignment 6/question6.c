#include <stdio.h>
int main ()
{
    int n,mfreq[100];
    int count=0,maxcount=0,i,j;
    int arr[10];
    int flag = 0;
    int f;
    printf("enter the number of elements-- \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for (i=0;i<n;i++)
    {
        count=0;
        for (j=i+1;j<n;j++)
        {
            flag=0;
            if(arr[i]==arr[j])
            {
                count++;
                if(count > maxcount)
                {
                    mfreq[flag] = arr[j];
                    f= flag;
                    maxcount=count;
                }
                else if (count == maxcount)
                {
                 mfreq[++flag] = arr[j];
                 f=flag;
                }
            }
        }
    }
    printf("the element with most occurence is / are --\n");
    for (i=0;i<f;i++)
    printf(" %d \t",mfreq[i]);
    return 0;
}
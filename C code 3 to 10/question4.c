#include <stdio.h>
int main()
{
    int x, ans = 0, k, ans2 = 0;
    printf("input a 3 digit number : ");
    scanf("%d", &x);
    if (x)
    {
        k = x % 10;
        ans += k;
        x = x / 10;
        ans2 += k* 100;
        if (x)
        {
            k = x % 10;
            ans += k;
            x = x / 10;
            ans2 += k * 10;
            if (x)
            {
                k = x % 10;
                ans += k;
                x = x / 10;
                ans2 += k * 1;
            }
        }
    }
    printf("\n sum is %d", ans);
    printf("\n reverse of a number is %d", ans2);

    return 0;
}
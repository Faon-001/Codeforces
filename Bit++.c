#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x = 0;
    scanf("%d", &n);
    while (n--)
    {
        char exp[4];
        scanf("%s", exp);
        if (exp[1] == '+')
        {
            x++;
        }
        else
        {
            --x;
        }
    }
    printf("%d", x);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, c;
        scanf("%d%d", &l, &r);

        if (l == 1 && r == 1)
        {
            printf("%d\n", 1);
        }
        else
        {
            c = r - l;
            printf("%d\n", c);
        }
    }

    return 0;
}
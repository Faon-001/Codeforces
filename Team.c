#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int c = 0;
    scanf("%d", &n);
    while (n--)
    {
        int know[3], count = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &know[i]);
            if (know[i] == 1)
            {
                count++;
            }
        }
        if (count > 1)
        {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
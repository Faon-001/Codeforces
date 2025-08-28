#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    int a[2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }

    int count = abs(a[0] - 2) + abs(a[1] - 2);

    printf("%d", count);
    return 0;
}
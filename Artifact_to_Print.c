#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);

    char newStr[3] = "TAP";
    int b = 0;
    for (int i = 0; i < 10 && b < 3; i++)
    {
        if (str[i] == newStr[b])
        {
            b++;
        }
    }

    if (b == 3)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    return 0;
}
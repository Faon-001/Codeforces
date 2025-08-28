#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s%s", a, b);

    strlwr(a);
    strlwr(b);

    int v = strcmp(a, b);
    printf("%d", v);

    return 0;
}
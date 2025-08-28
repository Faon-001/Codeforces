#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int num[50];

    char *token;
    int counter = 0;
    token = strtok(str, "+");
    while (token != 0)
    {
        num[counter++] = atoi(token);
        token = strtok(0, "+");
    }

    for (int i = 0; i < counter - 1; i++)
    {
        for (int j = i + 1; j < counter; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < counter; i++)
    {
        printf("%d", num[i]);
        if (i < counter - 1)
            printf("+");
    }
}
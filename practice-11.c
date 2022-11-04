#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    for (int i = size; i >= 1; i--)
    {
        int spaces = size - i;
        for (int x = 1; x <= spaces; x++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
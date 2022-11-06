#include <stdio.h>
#include <string.h>
int main()
{
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < column; y++)
        {
            char current[20];
            scanf("%s", current);
            int x = current[0];
            if (x == 67 || x == 77 || x == 89)
            {
                printf("#Color");
                return 0;
            }
        }
    }
    printf("#Black&White");
}

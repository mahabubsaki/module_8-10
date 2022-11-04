#include <stdio.h>
int main()
{
    int problems, success = 0;
    scanf("%d", &problems);
    for (int x = 1; x <= problems; x++)
    {
        int judges = 0;
        for (int z = 1; z <= 3; z++)
        {
            int input;
            scanf("%d", &input);
            if (input)
            {
                judges++;
            }
        }
        if (judges >= 2)
        {
            success++;
        }
    }
    printf("%d", success);
}
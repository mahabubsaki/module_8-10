#include <stdio.h>
int main()
{
    int arr[200001] = {0, 1};
    int N;
    scanf("%d", &N);
    for (int x = 2; x < N; x++)
    {
        arr[x] = arr[x - 1] + arr[x - 2];
    }
    for (int y = 0; y < N; y++)
    {
        printf("%d ", arr[y]);
    }
}
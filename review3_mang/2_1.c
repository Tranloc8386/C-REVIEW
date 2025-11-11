#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int arr[n];

    printf("Nhap n:");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    float tbc = sum / n;

    printf("Max la %d", max);
    printf("\nMin la %d", min);
    printf("\nTrung binh cong la %.2f", tbc);

    return 0;
}
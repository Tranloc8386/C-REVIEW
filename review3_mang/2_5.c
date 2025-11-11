#include <stdio.h>
int main()
{
    int n;
    int arr[n];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
        if (arr[i] > min)
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
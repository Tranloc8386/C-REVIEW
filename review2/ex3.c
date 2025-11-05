#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    int sum = 0;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Tong la: %d", sum);
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 != 0)
        {

            printf("Uoc so le la %d \n", i);
        }
    }

    return 0;
}

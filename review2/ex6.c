#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sodaonguoc = 0;
    int phandu;

    printf("Nhap n:");
    scanf("%d", &n);

    while (n != 0)
    {
        phandu = n % 10;
        sodaonguoc = sodaonguoc * 10 + phandu;
        n = n / 10;
    }

    printf("%d", sodaonguoc);

    return 0;
}

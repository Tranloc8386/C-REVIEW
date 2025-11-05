#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int phandu;
    int sodaonguoc = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    int temp=n;

    while (temp != 0)
    {
        phandu = temp % 10;
        sodaonguoc = sodaonguoc * 10 + phandu;
        temp = temp / 10;
    }

    if (sodaonguoc == n)
    {
        printf("TRUE");
    }
    else
        printf("FAIl");

    return 0;
}

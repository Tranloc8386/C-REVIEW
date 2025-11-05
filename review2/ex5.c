#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int giaithua = 1;
    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        giaithua *= i;
    }
    printf("%d", giaithua);
    return 0;
}

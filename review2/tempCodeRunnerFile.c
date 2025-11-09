#include <stdio.h>
#include <math.h>

int chinhphuong(int n)
{
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (i * i == n)
        {
            printf("%d la so chinh phuong", i);
            return 1;
        }
    }
    printf("Khong phai la chinh phuong");
    return 0;

    
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    chinhphuong(n);
    return 0;
}
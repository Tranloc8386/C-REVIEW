// Bài 5. Tính tổng các ước của số nguyên. VD: n = 10 => Tổng = 1 + 2 + 5 + 10 = 18
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    printf(" Tong %d", sum);

    return 0;
}

// Bài 6.  Nhập n, xác định n có phải số chính phương hay không? Số chính phương là số bình phương của một số nguyên, ví dụ như các số 0, 1, 4, 25, 49, 100..

#include <stdio.h>
#include <math.h>

int chinhphuong(int n)
{
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (i * i == n)
        {
            printf("%d la so chinh phuong", n);
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
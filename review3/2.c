#include <stdio.h>
#include <string.h>

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
}

int max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int trungbinhcong(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    printf("Tong la %.2f ", sum);
}
int main(int argc, char const *argv[])
{
    int n;
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Nhap n:");
    scanf("%d", &n);
    nhapmang(arr, n);

    int minn = min(arr, n);
    printf("min la: %d", minn);
    int maxx = max(arr,n);
    printf("\n Max %d", maxx);

    return 0;
}


//xoa phan tu tai vi tri k
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int arr[n];
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" Gia tri arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    int vitrixoa;
    printf("Nhap vi tri xoa: ");
    scanf("%d", &vitrixoa);

    for (int i = vitrixoa; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}


//Đếm và liệt kê các số nguyên tố trong mảng

#include <stdio.h>
#include <math.h>
int laNguyenTo(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int a[n];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int dem = 0;
    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (laNguyenTo(a[i])) {
            printf("%d ", a[i]);
            dem++;
        }
    }

    printf("\nTong so nguyen to : %d\n", dem);

    return 0;
}
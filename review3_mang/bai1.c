// Bài 1: Nhập mảng
// Yêu cầu: Nhập mảng và in ra tổng các phần tử trong mảng
// Ví dụ:
// Input: [1,2,3,4]
// Output: 10
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Nhap mang: ");
//     scanf("%d", &n);
//     int arr[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         printf("arr[%d] = ", i);
//         scanf("%d", &arr[i]);

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d", arr[i]);
//         sum += arr[i];

//     }
//     printf("\n Tong la:%d", sum);
//     return 0;
// }

// Bài 2: Thêm phần tử vào mảng
// Yêu cầu: Nhập mảng và sau đó thêm một phần tử vào mảng ở vị trí i
// Ví dụ:
// Input: [1,2,3x,4], thêm số 10 tại vị trí i = 1
// Output:   [1,10,2,3,4]

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     int arr[100];
//     printf("Nhap mang: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf(" arr[%d]", i);
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d", arr[i]);
//     }
//     int vitrithem;
//     int giatrithem;
//     printf(" \n Nhap vi tri them: ");
//     scanf("%d", &vitrithem);
//     printf("Nhap gia tri them:");
//     scanf("%d", &giatrithem);
//     for (int i = n; i > vitrithem; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[vitrithem]= giatrithem;
//     n++;
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d", arr[i]);
//     }

//     return 0;
// }

// Bài 3: Xóa phần tử mảng
// Yêu cầu: Nhập mảng và sau đó xoá một phần tử trong mảng ở vị trí i
// Ví dụ:
// Input: [1,2,3,4], xoá phần tử ở vị trị i = 2
// Output:   [1,2,4]

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

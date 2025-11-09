#include <stdio.h>
#include <math.h>

int tinhtong(int a, int b)
{

    int sum = 0;
    sum = a + b;
    printf("Tong: %d", sum);
    return sum;
}
int nguyento(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(int argc, char const *argv[])
{

    int a;
    int b;
    printf("Nhap a,b: ");
    scanf("%d %d", &a, &b);
    int sum = tinhtong(a, b);
    if (nguyento(sum))
    {
        printf("\nLa so nguyen to");
    }
    else
    {
        printf("\nKhong phai so nguyen to");
    }

    return 0;
}

// Bài 3. Số tự nhiên được gọi là số đẹp nếu cộng các chữ số của lại ta có một số mà kết thúc bằng 9.
// Ví dụ một số số đẹp là 18 (1+8=9), 234(2+3+4), 658 (6+5+8=19).
//  Nhập một số N, hãy kiểm tra xem N có phải là số đẹp hay không?

#include <stdio.h>
int main()
{
    int n;
    int temp;
    int phandu;
    int sum = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    while (n != 0)
    {
        phandu = n % 10;
        sum += phandu;
        n = n / 10;
    }
    if (sum % 10 == 9)
    {
        printf(" %d la so dep", temp);
    }
    else
    {
        printf("Khong phai so dep");
    }

    return 0;
}



//bai4

#include <stdio.h>


int islower(char c) {
    return (c >= 'a' && c <= 'z');
}
int isupper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int isalpha(char c) {
    return (islower(c) || isupper(c));
}
int isdigit(char c) {
    return (c >= '0' && c <= '9');
}

int isalnum( char c) {
    return (isalpha(c) || isdigit(c));
}

int tolower(char c) {
    if (isupper(c))
        return c + 32; 
    return c;
}

int  toupper( char c) {
    if (islower(c))
        return c -32; 
    return c;
}
int main() {
    char c;
    printf("Nhap c: ");
    scanf("%c",&c);

    printf("\nKet qua:\n");
    printf("islower %d\n", islower(c));
    printf("isupper %d\n", isupper(c));
    printf("isalpha %d\n", isalpha(c));
    printf("isdigit%d\n", isdigit(c));
    printf("isalnum %d\n", isalnum(c));
    printf("tolower%c\n", tolower(c));
    printf("toupper %c\n", toupper(c));

    return 0;
}
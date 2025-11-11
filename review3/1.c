#include <stdio.h>
int tang10(int *x)
{
    *x = *x + 10;
    return *x;
}
void hoandoi(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a;
    int *p;
    printf("Nhap a: ");
    scanf("%d", &a);
    p = &a;
    printf("\nGia tri p: %d", p);
    printf("\nGia tri tai dia chi p tro toi: %d", *p);
    printf("\nGia tri a: %d", a);
    printf("\nDia chi a: %d", &a);

    a = 50;
    printf("\nGia tri tai dia chi p tro toi: %d", *p);

    *p = 30;
    printf("\nGia tri a: %d", a);

   
    printf("\nsau khi goi ham tang 10: %d",  tang10(&a));

    int b;
    printf("\nNhap b: "); scanf("%d", &b);
    hoandoi(&a, &b);
    printf("Gia tri khi hoan doi la: a= %d, b=%d ", a,b);

    return 0;
}

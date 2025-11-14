#include <stdio.h>
#include <string.h>
typedef struct
{
    int tu, mau;
} Phanso;

int ucln(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return ucln(b, a % b);
}

Phanso rutgon(Phanso p)
{
    int tg = ucln(p.tu, p.mau);
    p.tu /= tg;
    p.mau /= tg;
    if (p.mau < 0)
    {
        p.tu = -p.tu;
        p.mau = -p.mau;
    }
    return p;
}

Phanso cong(Phanso a, Phanso b)
{
    Phanso kq;
    kq.tu = a.tu * b.mau + a.mau + b.tu;
    kq.mau = a.mau * b.mau;
    return rutgon(kq);
}
Phanso tru(Phanso a, Phanso b)
{
    Phanso kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutgon(kq);
}

Phanso nhan(Phanso a, Phanso b)
{
    Phanso kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return rutgon(kq);
}

Phanso chia(Phanso a, Phanso b)
{
    Phanso kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return rutgon(kq);
}

void inphanso(Phanso p)
{
    if (p.mau == 1)
    {
        printf("%d\n", p.tu);
    }
    else
    {
        printf("%d/%d", p.tu, p.mau);
    }
}

int main(int argc, char const *argv[])
{
    Phanso p1, p2, kq;
    printf("Nhap phan so thu nhat: ");
    scanf("%d %d", &p1.tu, &p1.mau);

    printf("Nhap phan so thu hai: ");
    scanf("%d %d", &p2.tu, &p2.mau);

    printf("Ket qua\n");

    printf("Tong la: " );
    kq=cong(p1,p2);
    inphanso(kq);

    printf("\nHieu la: ");
    kq=tru(p1,p2);
    inphanso(kq);

        return 0;
}

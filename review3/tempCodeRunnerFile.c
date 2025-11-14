#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    printf("Nhap chuoi: ");
    gets(c);
    int cnt[256] = {0};

    for (int i = 0; i < strlen(c); i++)
    {
        cnt[c[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c xuat hien %d lan\n", i, cnt[i]);
        }
    }
    return 0;
}
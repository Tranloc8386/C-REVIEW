


// Bài 1. Nhập vào một chuỗi, sau đó in chuỗi đó ra màn hình.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char x[100];
    printf("Nhap chuoi x: ");
    gets(x);
    printf("chuoi vua nhap la: %s", x);
    return 0;
}

// Bài 2. Nhập vào một chuỗi, sau đó in hoa/in thường chuỗi đó ra màn hình.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char x[100];
    printf("Nhap chuoi: ");
    gets(x);

    printf(" \nChuoi in thuong ");
    for (int i = 0; i < strlen(x); i++)
    {
        printf("%c", tolower(x[i]));
    }

    printf("\nChuoi in hoa");
    for (int i = 0; i < strlen(x); i++)
    {
        printf("%c", toupper(x[i]));
    }

    return 0;
}

// Bài 3. Nhập vào một chuỗi, sau đó in ra màn hình chuỗi đảo ngược ra màn hình.
#include <stdio.h>
#include <string.h>
int main()
{
    char x[100];
    printf("Nhap chuoi: ");
    gets(x);

    int len = strlen(x);

    for (int i = len - 1; i >= 0; i--)
    {
        printf(" %c", x[i]);
    }
    return 0;
}

// Bài 4. Nhập vào một chuỗi, sau đó in ra tần suất xuất hiện của các ký tự.

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Nhap chuoi: ");
    gets(s);
    int cnt[256] = {0};
    for(int i = 0; i < strlen(s); i++){
        cnt[s[i]]++;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            printf("%c xuat hien %d lan\n", i, cnt[i]);
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int msv;
    char hoten[100];
    float DTB;
} SV;
SV themsinhvien()
{
    FILE *f;
    f = fopen("D:\\C- aptech\\Hoc Mon C\\day13_file\\output.txt", "ab");

    SV sinhvien;
    printf("Nhap msv: ");
    scanf(" %d", &sinhvien.msv);
    getchar();
    printf(" Nhap Ho Ten: ");
    gets(sinhvien.hoten);
    printf(" Nhap DTB: ");
    scanf(" %f", &sinhvien.DTB);
    fwrite(&sinhvien, sizeof(sinhvien), 1, f);
    fclose(f);
    return sinhvien;
}
void xuatthongtin(SV sinhvien)
{
    FILE *f;
    f = fopen("D:\\C- aptech\\Hoc Mon C\\day13_file\\output.txt", " rb");

    {
        printf(" Ma sinh vien: %d \t Ho Ten: %s \t Diem Trung Binh: %.2f ", sinhvien.msv, sinhvien.hoten, sinhvien.DTB);
    }
    fread(&sinhvien, sizeof(sinhvien), 1, f);
    fclose(f);
}
void timsinhvien()

{
    SV sinhvien;
    FILE *f;
    f = fopen("D:\\C- aptech\\Hoc Mon C\\day13_file\\output.txt", " rb");
    int maso;
    printf(" Nhap ma so can tim: ");
    scanf(" %d", &maso);
    int found =0;
    while (fwrite(&sinhvien, sizeof(sinhvien), 1, f))
    {
        if (sinhvien.msv == maso)
        {    
            printf(" Da tim thay sinh vien \n");
            printf(" Ma sinh vien: %d", maso);
            printf(" Ho va Ten: %s", sinhvien.hoten);
            printf(" DTB: %f", sinhvien.DTB);
            found =1;
        }
        break;
    }
    fclose(f);
}

int main()
{
    SV ds[100];
    int n;

    int luachon;

    while (1)

    {
        printf("\n\n==========MENU==========\n\n");
        printf(" 1. Them sinh vien moi vao file\n");
        printf(" 2. Hien thi danh sach tu file\n");
        printf(" 3. Tim sinh vien theo ma so:\n ");
        printf(" 4. Lua chon khong hop le\n");

        printf(" Nhap lua chon:  ");
        scanf(" %d", &luachon);

        switch (luachon)
        {
        case 1:
            printf(" Nhap n:");
            scanf(" %d", &n);
            getchar();
            for (int i = 0; i < n; i++)
            {
                printf(" Sinh vien %d\n", i + 1);
                ds[i] = themsinhvien();
            }
            break;
        case 2:
            printf(" Danh sach sinh vien\n");
            for (int i = 0; i < n; i++)
            {
                printf(" \n");
                xuatthongtin(ds[i]);
            }
            break;
        case 3:
            timsinhvien();
            break;
        default:
            printf(" Lua chon khong hop le ");
            break;
        }
    }
    return 0;
}
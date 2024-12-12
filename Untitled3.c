#include <stdio.h>

int main() {
    int a;
    float tien, result;   
    const float USD_TO_VND = 23500;
    const float EUR_TO_VND = 25000;
    const float GBP_TO_VND = 28000;
    const float JPY_TO_VND = 180;
    const float VND_TO_USD = 1 / 23500.0;
    const float VND_TO_EUR = 1 / 25000.0;
    const float VND_TO_GBP = 1 / 28000.0;
    const float VND_TO_JPY = 1 / 180.0;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi: \n");
    scanf("%d", &a);
    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &tien);

    switch (a) {
        case 1:
            result =tien* USD_TO_VND;
            printf("%.2f USD = %.3f VND\n", tien, result);
            break;
        case 2:
            result =tien* EUR_TO_VND;
            printf("%.2f EUR = %.3f VND\n", tien, result);
            break;
        case 3:
            result =tien* GBP_TO_VND;
            printf("%.2f GBP = %.3f VND\n", tien, result);
            break;
        case 4:
            result =tien* JPY_TO_VND;
            printf("%.2f JPY = %.3f VND\n", tien, result);
            break;
        case 5:
            result =tien* VND_TO_USD;
            printf("%.2f VND = %.3f USD\n", tien, result);
            break;
        case 6:
            result =tien* VND_TO_EUR;
            printf("%.2f VND = %.3f EUR\n", tien, result);
            break;
        case 7:
            result =tien* VND_TO_GBP;
            printf("%.2f VND = %.3f GBP\n", tien, result);
            break;
        case 8:
            result =tien* VND_TO_JPY;
            printf("%.2f VND = %.3f JPY\n", tien, result);
            break;
        default:
            printf("Lua chon sai\n");
            break;
    }

    return 0;
}

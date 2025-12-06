/*Soru: Tek Sayıları Atlama

Kullanıcıdan 5 elemanlı bir dizi girmesini iste.
Diziyi yazdırırken tek sayıları continue ile atlayıp, sadece çift sayıları ekrana yazdır.

1-BAŞLA
2-DİZİ[5] TANIMLA
3-EKRANA "5 ADET SAYI GİRİNİZ" YAZDIR
4-TEKRARLA I=0 DEN 4 E KADAR
    4.1-EKRANA "SAYI GİRİNİZ:" YAZDIR
    4.2-KLAVYEDEN DİZİ[I] GİR
5-EKRANA "ÇİFT SAYILAR:" YAZDIR
6-TEKRARLA I=0 DEN 4 E KADAR
    6.1-EĞER DİZİ[I] MOD 2 ≠ 0 İSE
        6.1.1-DEVAM ET
    6.2-EKRANA DİZİ[I] YAZDIR
7-BİTİR
*/
#include <stdio.h>

int main() {
    int dizi[5];

    printf("5 adet sayi giriniz:\n");

    for (int i = 0; i < 5; i++) {
        printf("Sayi giriniz: ");
        scanf("%d", &dizi[i]);
    }

    printf("Cift sayilar:\n");
    for (int i = 0; i < 5; i++) {
        if (dizi[i] % 2 != 0) {
            continue;
        }
        printf("%d\n", dizi[i]);
    }

    return 0;
}
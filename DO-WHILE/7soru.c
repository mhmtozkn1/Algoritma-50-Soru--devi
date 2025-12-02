/*7.SORU: Menü Sistemi

Bir menü göster:
1- Toplama
2- Çıkarma
0- Çıkış
Kullanıcı 0 girene kadar do-while menüyü döndürsün.
Her işlemde iki sayı alıp sonucu yaz.

1-BAŞLA
2-Menüyü göster
3-Kullanıcıdan seçim al
4-Seçim 0 mı? Evet ise 8'e git. Hayır ise 5'e git.
5-Seçim 1 ise toplama yap, 2 ise çıkarma yap
6-Sonuçu yazdır
*/
#include <stdio.h>

int main() {
    int secim;
    float sayi1, sayi2, sonuc;

    do {
        
        printf("Menü:\n");
        printf("1- Toplama\n");
        printf("2- Çıkarma\n");
        printf("0- Çıkış\n");
        printf("Seçiminizi yapınız: ");
        git:
        scanf("%d", &secim);

        if (secim == 1) {
            // Toplama işlemi
            printf("İki sayı giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            sonuc = sayi1 + sayi2;
            printf("Sonuç: %.2f\n", sonuc);
        } else if (secim == 2) {
            // Çıkarma işlemi
            printf("İki sayı giriniz: ");
            scanf("%f %f", &sayi1, &sayi2);
            sonuc = sayi1 - sayi2;
            printf("Sonuç: %.2f\n", sonuc);
        } else if (secim != 0) {
            printf("Geçersiz seçim. Lütfen tekrar deneyiniz.\n");
            goto git;
        }

    } while (secim != 0);

    printf("Programdan çıkılıyor.\n");
    return 0;
}
/*8.SORU:Kare veya Küp Hesaplama Menüsü

Menü:
1 — sayının karesi
2 — sayının küpü
0 — çıkış
Kullanıcı 0 girene kadar döngü sürsün.

1-BAŞLA
2-KULLANICIDAN BİR SAYI GİRİLMESİNİ İSTE
3-MENÜYÜ GÖSTER
4-KULLANICIDAN BİR SEÇİM GİRİLMESİNİ İSTE
5-EĞER SEÇİM 1 İSE
    5.1-SEÇİLEN SAYININ KARESİNİ HESAPLA VE YAZDIR
6-EĞER SEÇİM 2 İSE
    6.1-SEÇİLEN SAYININ KÜPÜNÜ HESAPLA VE YAZDIR
7-EĞER SEÇİM 0 İSE
    7.1-DÖNGÜDEN ÇIKIŞ YAP  
8-BİTİR
*/
#include <stdio.h>
#include <math.h>

int main () {
    int sayi, secim;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    do {
        printf("\nMenü:\n");
        printf("1 — sayının karesi\n");
        printf("2 — sayının küpü\n");
        printf("0 — çıkış\n");
        printf("Bir seçim yapın: ");
        git:
        scanf("%d", &secim);

        if (secim == 1) {
            printf("Sayının karesi: %d\n", sayi * sayi);
        } else if (secim == 2) {
            printf("Sayının küpü: %d\n", sayi * sayi * sayi);
        } else if (secim == 0) {
            printf("Çıkış yapılıyor...\n");
        } else {
            printf("Geçersiz seçim. Lütfen tekrar deneyin.\n");
            goto git;
        }
    } while (secim != 0);

    return 0;
}
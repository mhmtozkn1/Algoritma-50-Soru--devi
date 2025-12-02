/*8.soru:Sayının Basamak Sayısını Bul

Kullanıcı bir tamsayı girsin.
For ile basamak adedini hesapla.
(her turda sayı = sayı / 10)

1-BAŞLA
2-KULLANICIDAN BİR TAMSAYI GİRİLMESİNİ İSTE
3-BASAMAK_SAYISI = 0
4-EĞER SAYI > 0 İSE
    BASAMAK_SAYISI = BASAMAK_SAYISI + 1
    SAYI = SAYI / 10
    GİT 4. ADIMA
5-EKRANA BASAMAK_SAYISI YAZDIR
6-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi, basamak_sayisi = 0;

    printf("Bir tamsayi giriniz: ");
    scanf("%d", &sayi);

    for (; sayi != 0; sayi = sayi / 10) {
        basamak_sayisi++;
    }

    printf("Basamak sayisi: %d\n", basamak_sayisi);

    return 0;
}
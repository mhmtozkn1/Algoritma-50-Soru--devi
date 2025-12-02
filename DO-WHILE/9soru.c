/*9.SORU:Kullanıcı “0” Girene Kadar Sayıları Topla

Kullanıcıdan sayı al.
0 girildikçe döngü bitsin.
0 girilene kadar tüm sayıların toplamını hesapla.
Algoritma
1-BAŞLA
2-TOPLAM DEĞİŞKENİ OLUŞTUR VE 0'A
3-DO
    A-KULLANICIDAN SAYI GİRİŞİ AL
    B-EĞER SAYI 0 DEĞİLSE
        I-SAYIYI TOPLAM DEĞİŞKENİNE EKLE
4-WHİLE(SAYI 0 DEĞİL)
5-SAYI TOPLAMINI YAZDIR
6-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi;
    int toplam = 0;

    do {
        printf("Bir sayı girin (Toplamı bitirmek için 0 girin): ");
        scanf("%d", &sayi);

        if (sayi != 0) {
            toplam += sayi;
        }
    } while (sayi != 0);

    printf("Girilen sayıların toplamı: %d\n", toplam);

    return 0;
}
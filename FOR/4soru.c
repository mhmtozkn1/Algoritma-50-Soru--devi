/*Sayının Basamak Toplamı

Kullanıcı sayı girsin.
For ile sayının basamaklarını ayırıp toplamını hesapla.

(For içinde bölme/mod alma yapılacak)

1-BAŞLA
2-DEĞİŞKENLERİ TANIMLA: sayi, basamak, toplam (tam sayı)
3-KULLANICIDAN SAYI AL: sayi
4-TOPLAMI SIFIRLA: toplam = 0
5-DÖNGÜ BAŞLAT: sayi > 0 iken tekrarla
    a-BASAMAĞI AL: basamak = sayi % 10
    b-TOPLAMA İŞLEMİ: toplam = toplam + basamak
    c-SAYIYI KÜÇÜLT: sayi = sayi / 10
6-DÖNGÜ BİTİR
7-TOPLAM DEĞERİNİ EKRANA YAZDIR
8-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi, basamak, toplam = 0;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (; sayi > 0; ) {
        basamak = sayi % 10;
        toplam += basamak;
        sayi /= 10;
    }

    printf("Sayinin basamaklar toplami: %d\n", toplam);
    return 0;
}
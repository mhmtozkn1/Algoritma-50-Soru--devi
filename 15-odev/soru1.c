/*SORU 1: 1’den 100’e kadar sayıların sadece 3’e ve 5’e aynı anda bölünenlerini toplayan programı yazın. FOR DÖNGÜSÜ kullanın.

1-BAŞLA
2-Toplam=0
3-Döngü Sayacı=1 den 100 e kadar
    a-Eğer (Döngü Sayacı mod 3 =0 VE Döngü Sayacı mod 5=0) ise
        i-Toplam=Toplam + Döngü Sayacı  
4-Yazdır Toplam
5-BİTİR

*/
#include <stdio.h>

int main() {
    int toplam = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            toplam += i;
        }
    }
    printf("3'e ve 5'e aynı anda bölünen sayıların toplamı: %d\n", toplam);
    return 0;
}
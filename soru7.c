/* Bir dizideki elemanların ortalamasını bulan programı yazın.

int dizi[5] = {10, 20, 30, 40, 50};

1-BAŞLA
2-Diziyi tanımla ve elemanları ata
3-Toplam değişkenini 0 olarak başlat
4-Döngü başlat (i = 0; i < 5; i++)
    4.1-Toplam değişkenine dizinin i'inci elemanını ekle
5-Döngü bitir
6-Ortalama değişkenini toplam / 5 olarak hesapla
7-Ortalama değerini ekrana yazdır
8-BİTİR
*/
#include <stdio.h>

int main() {
    int dizi[5] = {10, 20, 30, 40, 50};
    int toplam = 0;
    float ortalama;

    for (int i = 0; i < 5; i++) {
        toplam += dizi[i];
    }

    ortalama = toplam / 5.0;

    printf("Dizinin ortalamasi: %.2f\n", ortalama);

    return 0;
}
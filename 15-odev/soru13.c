/* SORU 13 : Kullanıcıdan 6 elemanlı bir tam sayı dizisi al.
Dizi üzerinde dolaşırken negatif sayıları continue ile atla.
Geriye kalan pozitif sayıların toplamını ekrana yazdır.

1-BAŞLA
2-Kullanıcıdan 6 elemanlı bir tam sayı dizisi al
3-Toplam değişkenini 0 olarak başlat
4-Döngü başlat (i=0; i<6; i++)
    4.1-Eğer dizi[i] negatifse continue ile sonraki adıma geç
    4.2-Toplam değişkenine dizi[i] değerini ekle
5-Döngü sonu
6-Toplam değişkenini ekrana yazdır
7-BİTİR

*/
#include <stdio.h>

int main() {
    int dizi[6];
    int toplam = 0;

    
    printf("6 elemanlı bir tam sayı dizisi giriniz:\n");
    for (int i = 0; i < 6; i++) {
        printf("Eleman %d: ", i +   1);
        scanf("%d", &dizi[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        if (dizi[i] < 0) {
            continue; // Negatif sayıları atla
        }
        toplam += dizi[i]; 
    }
    
    printf("Pozitif sayıların toplamı: %d\n", toplam);
    return 0;
}
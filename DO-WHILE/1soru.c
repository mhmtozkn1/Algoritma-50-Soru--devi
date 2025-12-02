/*1.SORU:Negatif Sayı Girilene Kadar Toplama

Kullanıcı pozitif sayılar girsin.
Negatif sayı girildiğinde döngü duracak.
Girilen pozitif sayıların toplamını yaz.

1-BAŞLA
2-Kullanıcıdan pozitif sayılar al
3-Toplam değişkenini 0 yap
4-do
    a-Eğer sayı negatifse döngüden çık
    b-Sayiyi toplama ekle
    c-Kullanıcıdan yeni pozitif sayı al
5-while(sayı pozitif)
6-Toplamı yazdır
7-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi;
    int toplam = 0;

    printf("Pozitif sayılar giriniz (Negatif sayı girince durur):\n");

    do {
        printf("Sayı girin: ");
        scanf("%d", &sayi);

        if (sayi < 0) {
            break; 
        }

        toplam += sayi; 

    } while (1); 

    printf("Girilen pozitif sayıların toplamı: %d\n", toplam);

    return 0;
}
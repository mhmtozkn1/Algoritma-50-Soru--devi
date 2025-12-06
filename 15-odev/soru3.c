/*Soru – Bir dizide kaç tane çift, kaç tane tek sayı olduğunu bulan programı yazın.

int sayilar[10] = {3,6,1,8,9,10,12,5,7,2};

1-BAŞLA
2-Dizi tanımla ve sayıları yerleştir
3-Çift ve tek sayı sayacı tanımla
4-Diziyi döngü ile tara
5-Her sayı için çift veya tek kontrolü yap
6-Çift veya tek sayacı artır
7-Çift ve tek sayı sayısını ekrana yazdır
8-BİTİR
*/
#include <stdio.h>
#define hacim 10

int main() {
    int sayilar[hacim] = {3,6,1,8,9,10,12,5,7,2};
    int i;
    int ciftSayac = 0;
    int tekSayac = 0;

    
    for(i = 0; i < hacim; i++) {
        if(sayilar[i] % 2 == 0) {
            ciftSayac++;
        } else {
            tekSayac++;
        }
    }

    
    printf("Çift sayı adedi: %d\n", ciftSayac);
    printf("Tek sayı adedi: %d\n", tekSayac);

    return 0;
}
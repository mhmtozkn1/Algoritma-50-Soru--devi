/*Soru 2: Kullanıcıdan 10 sayı alıp aldığı sayıları bir arrayin içine yerleştirip arrayin içinde en büyük ve en küçük sayıyı bulan C programı yazın.

1-BAŞLA
2-Kullanıcıdan 10 sayı al
3-Sayıları bir array içine yerleştir
4-Arrayin içindeki en büyük sayıyı bul
5-Arrayin içindeki en küçük sayıyı bul
6-En büyük ve en küçük sayıları ekrana yazdır
7-BİTİR


*/

#include <stdio.h>
#define hacim 10

int main() {
    int sayilar[hacim];
    int i;
    int enBuyuk, enKucuk;

   
    printf("Lütfen 10 sayı giriniz:\n");
    for(i = 0; i < hacim; i++) {
        printf("%d. sayıyı giriniz: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    
    enBuyuk = sayilar[0];
    enKucuk = sayilar[0];

    for(i = 1; i < hacim; i++) {
        if(sayilar[i] > enBuyuk) {
            enBuyuk = sayilar[i];
        }
        if(sayilar[i] < enKucuk) {
            enKucuk = sayilar[i];
        }
    }

    
    printf("En büyük sayı: %d\n", enBuyuk);
    printf("En küçük sayı: %d\n", enKucuk);

    return 0;
}


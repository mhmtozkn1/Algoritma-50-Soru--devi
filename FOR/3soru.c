/*3.SORU:Kullanıcının Girdiği 10 Sayının En Büyüğünü Bul

Kullanıcıdan 10 adet sayı iste.
For döngüsü içinde en büyük olanı bul ve sonunda yaz.

1-BAŞLA
2-DEĞİŞKENLERİ TANIMLA: i, sayi, enBuyuk (tam sayı)
3-EN BÜYÜK DEĞERİ SIFIRLA: enBuyuk = 0
4-DÖNGÜ BAŞLAT: i = 1'den i <= 10'a kadar i'yi 1 artırarak tekrarla
    a-KULLANICIDAN BİR SAYI AL: sayi
    b-EĞER (sayi > enBuyuk) İSE
        enBuyuk = sayi
5-DÖNGÜ BİTİR
6-EN BÜYÜK DEĞERİ EKRANA YAZDIR
7-BİTİR
*/

#include <stdio.h>

int main() {
    int i, sayi, enBuyuk = 0;

    for (i = 1; i <= 10; i++) {
        printf("Bir sayi giriniz (%d/10): ", i);
        scanf("%d", &sayi);

        if (sayi > enBuyuk) {
            enBuyuk = sayi;
        }
    }

    printf("Girilen sayilarin en buyugu: %d\n", enBuyuk);
    return 0;
}
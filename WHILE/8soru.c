/*8.SORU:Sipariş Hazırlama Sistemi

Kafe çalışanı içecek isimleri giriyor.
Kullanıcı “bitir” yazana kadar içecekleri sırayla al.
Kaç adet sipariş alındığını say.While döngüsü kullan.

1-BAŞLA
2-Kullanıcıdan içecek ismi al
3-Eğer içecek ismi "bitir" ise 6.adıma git
4-Sipariş sayacını 1 artır
5-Adım 2'ye git
6-Sipariş sayısını ekrana yazdır
7-BİTİR


*/

#include <stdio.h>
#include <string.h>

int main() {
    char icecek[50];
    int siparis_sayaci = 0;

    while (1) {
        printf("Içecek ismi girin (bitir yazarsanız durur): ");
        scanf("%s", icecek);

        if (strcmp(icecek, "bitir") == 0) {
            break;
        }

        siparis_sayaci++;
    }

    printf("Toplam sipariş sayısı: %d\n", siparis_sayaci);

    return 0;
}
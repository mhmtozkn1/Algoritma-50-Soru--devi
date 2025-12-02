/*Spotify’da Reklam Geçme Simülasyonu

Kullanıcıya sor: “Kaç tane reklam var?”
Reklam sayısı > 0 olduğu sürece while döngüsü çalışsın.

Her turda:
“Reklam geçiliyor…” yaz
reklam– –

Reklamlar bitince:
“Şimdi müzik keyfi başlasın!” yaz.

1-BAŞLA
2-Kullanıcıdan reklam sayısını al
3-Reklam sayısı 0’dan büyük olduğu sürece 5.adıma git
4-Adım 8’e git
5-“Reklam geçiliyor…” yazdır
6-Reklam sayısını 1 azalt
7-Adım 3’e git
8-“Şimdi müzik keyfi başlasın!” yazdır
9-BİTİR
*/
#include <stdio.h>

int main() {
    int reklam_sayisi;

    printf("Kaç tane reklam var? ");
    scanf("%d", &reklam_sayisi);

    while (reklam_sayisi > 0) {
        printf("Reklam geçiliyor...\n");
        reklam_sayisi--;
    }

    printf("Şimdi müzik keyfi başlasın!\n");

    return 0;
}
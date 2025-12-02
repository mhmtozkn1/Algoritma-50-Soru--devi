/*6.SORU:Telefon Kilidi – 3 Yanlışta Blokla

Parola: 1234
Kullanıcı şifre deniyor.
Yanlış giriş sayısını while ile say.
3 kez yanlış yaparsa: “Telefon kilitlendi.” yaz.
Doğru girerse: “Açıldı.” yaz.

1-BAŞLA
2-PAROLA=1234
3-YANLIŞ_SAYISI=0
4-KULLANICI ŞİFRE GİR ŞİFRE
5-WHILE ŞİFRE!=PAROLA VE YANLIŞ_SAYISI<3 TEKRARLA
    5.1-YANLIŞ_SAYISI=YANLIŞ_SAYISI+1
    5.2-EĞER YANLIŞ_SAYISI==3 İSE
        5.2.1-YAZ "TELEFON KİLİTLENDİ"
    5.3-DEĞİLSE
        5.3.1-KULLANICI ŞİFRE GİR ŞİFRE
6-EĞER ŞİFRE==PAROLA İSE
    6.1-YAZ "AÇILDI"
7-BİTİR

*/
#include <stdio.h>

int main () {
    const int PAROLA = 1234;
    int yanlis_sayisi = 0;
    int sifre;

    printf("Sifre girin: ");
    scanf("%d", &sifre);

    while (sifre != PAROLA && yanlis_sayisi < 3) {
        yanlis_sayisi++;

        if (yanlis_sayisi == 3) {
            printf("Telefon kilitlendi.\n");
        } else {
            printf("Sifre girin: ");
            scanf("%d", &sifre);
        }
    }

    if (sifre == PAROLA) {
        printf("Acildi.\n");
    }

    return 0;
}
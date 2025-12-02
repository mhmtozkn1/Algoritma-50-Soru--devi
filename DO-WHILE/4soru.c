/*4.SORU:Karakter Gir – Sadece 'q' Programı Bitirir

Kullanıcı tek karakter girsin.
Girilen karakter q olmadıkça döngü dönsün.
q girince “Program kapandı” yaz.

1-BAŞLA
2-KARAKTER DEĞİŞKENİ OLUŞTUR
3-DO
    A-KULLANICIDAN KARAKTER GİRİŞİ AL
    B-EĞER KARAKTER 'q' İSE
        I-“Program kapandı” YAZ
        II-DÖNGÜDEN ÇIK
    C-DEĞİLSE
        I-TEKRAR KULLANICIDAN KARAKTER GİRİŞİ AL
4-WHİLE(KARAKTER !='q')
5-BİTİR
*/
#include <stdio.h>

int main() {
    char karakter;

    do {
        printf("Bir karakter girin (Programı kapatmak için 'q' girin): ");
        scanf(" %c", &karakter);

        if (karakter == 'q') {
            printf("Program kapandı\n");
        }
    } while (karakter != 'q');

    return 0;
}
/*2.SORU:Kullanıcı “x” Girene Kadar Karakter Al

While döngüsüyle karakter oku.
Kullanıcı 'x' girerse döngü bitsin.

1-BAŞLA
2-KARAKTER_DEGISKENI = BOŞ
3-EKRANA "Bir karakter giriniz (Çıkmak için 'x' giriniz): " YAZ
4-KARAKTER_DEGISKENI = KULLANICIDAN_KARAKTER_AL
5-EĞER KARAKTER_DEGISKENI 'x' İSE
    6-DÖNGÜYÜ_BİTİR
7-DEĞİLSE
    8-EKRANA "Girdiğiniz karakter: " + KARAKTER_DEGISKENI YAZ
9-BAŞA DÖN
10-BİTİR
*/
#include <stdio.h>

int main() {
    char karakter_degiskeni = '\0';

    while (1) {
        printf("Bir karakter giriniz (Çıkmak için 'x' giriniz): ");
        scanf(" %c", &karakter_degiskeni);

        if (karakter_degiskeni == 'x') {
            break;
        } else {
            printf("Girdiğiniz karakter: %c\n", karakter_degiskeni);
        }
    }

    return 0;
}
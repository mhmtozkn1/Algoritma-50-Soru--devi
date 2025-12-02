/*5.SORU:Sadece Çift Sayı Girilene Kadar

Kullanıcıdan sayılar al.
Çift sayılar gelmeye devam ettiği sürece döngü sürsün.
Tek sayı gelince döngü sonlansın ve “Tek sayı ile durduruldu.” yaz.


Algoritma 
1-BAŞLA
2-SAYI DEĞİŞKENİ OLUŞTUR
3-DO
    A-KULLANICIDAN SAYI GİRİŞİ AL
    B-EĞER SAYI TEK İSE
        I-“Tek sayı ile durduruldu.” YAZ
        II-DÖNGÜDEN ÇIK
    C-DEĞİLSE
        I-TEKRAR KULLANICIDAN SAYI GİRİŞİ AL
4-WHİLE(SAYI ÇİFT)
5-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi;

    do {
        printf("Bir sayı girin (Tek sayı girince durur): ");
        scanf("%d", &sayi);

        if (sayi % 2 != 0) {
            printf("Tek sayı ile durduruldu.\n");
        }
    } while (sayi % 2 == 0);

    return 0;
}
/*Girilen 10 sayı içinden yalnızca tek sayıların ortalamasını bulan program

1-BAŞLA
2-SAYI=0,TOPLAM=0,TEK_SAYI_ADEDI=0,ORTALAMA=0
3-EKRANA "10 ADET SAYI GİRİNİZ" YAZDIR
4-TEKRARLA I=1 DEN 10 A KADAR
    4.1-EKRANA "SAYI GİRİNİZ:" YAZDIR
    4.2-KLAVYEDEN SAYI GİR
    4.3-EĞER SAYI MOD 2 ≠ 0 İSE
        4.3.1-TOPLAM=TOPLAM+SAYI
        4.3.2-TEK_SAYI_ADEDI=TEK_SAYI_ADEDI+1
    4.4-EĞERSON
5-EĞER TEK_SAYI_ADEDI > 0 İSE
    5.1-ORTALAMA=TOPLAM/TEK_SAYI_ADEDI
    5.2-EKRANA "TEK SAYILARIN ORTALAMASI: " + ORTALAMA YAZDIR
6-EĞERSOn
7-BİTİR
*/
#include <stdio.h>
int main() {
    int sayi, toplam = 0, tek_sayi_adedi = 0;
    float ortalama;

    printf("10 adet sayi giriniz:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Sayi giriniz: ");
        scanf("%d", &sayi);

        if (sayi % 2 != 0) {
            toplam += sayi;
            tek_sayi_adedi++;
        }
    }

    if (tek_sayi_adedi > 0) {
        ortalama = (float)toplam / tek_sayi_adedi;
        printf("Tek sayilarin ortalamasi: %.2f\n", ortalama);
    } else {
        printf("Girilen sayilar arasinda tek sayi yoktur.\n");
    }

    return 0;
}
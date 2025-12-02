/*3.SORU:1–100 Arası Sayı Tahmin Oyunu

Bilgisayar 1–100 arası rastgele sayı seçsin.
Kullanıcı doğru tahmin edene kadar döngü sürsün.
Tahmin küçükse “Yukarı”, büyükse “Aşağı” yaz.do while döngüsü kullan.
Doğru tahmin edince “Tebrikler, bildiniz!” yaz.

1-BAŞLA
2-Bilgisayarın seçeceği rastgele sayıyı belirle (1-100)
3-Kullanıcıdan tahmin al
4-do
    a-Eğer tahmin doğruysa döngüden çık
    b-Eğer tahmin küçükse “Yukarı” yaz
    c-Eğer tahmin büyükse “Aşağı” yaz
    d-Kullanıcıdan yeni tahmin al
5-while(tahmin yanlış)
6-“Tebrikler, bildiniz!” yazdır
7-BİTİR
*/
#include <stdio.h>
#include <stdlib.h>
#define rastgele_sayi 58

int main() {
    int  tahmin;

   

    printf("1-100 arası bir sayı tahmin edin: ");
    scanf("%d", &tahmin);

    do {
        if (tahmin == rastgele_sayi) {
            break; 
        } else if (tahmin < rastgele_sayi) {
            printf("Yukarı\n");
        } else {
            printf("Aşağı\n");
        }

        printf("Yeni tahmin girin: ");
        scanf("%d", &tahmin);

    } while (1); 

    printf("Tebrikler, bildiniz!\n");

    return 0;
}
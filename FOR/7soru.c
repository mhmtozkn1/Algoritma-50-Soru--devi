/*7.SORU:10 Sayı Gir – Pozitif ve Negatif Adetlerini Bul

Kullanıcıdan 10 sayı al.
For ile sayıları okuyup
• Pozitif kaç tane
• Negatif kaç tane
hesapla.

1- BAŞLA
2- POZITIF_ADET = 0
3- NEGATIF_ADET = 0
4- DÖNGÜ İÇİN i = 1 DEN 10 A KADAR ARTIRIMLI OLARAK
    5- KULLANICIDAN BİR SAYI GİRİLMESİNİ İSTE
    6- SAYIYI AL
    7- EĞER SAYI > 0 İSE
        8- POZITIF_ADET = POZITIF_ADET + 1
    9- DEĞİLSE EĞER SAYI < 0 İSE
        10- NEGATIF_ADET = NEGATIF_ADET + 1
11- DÖNGÜ SONU
12- POZITIF_ADET YAZDIR
13- NEGATIF_ADET YAZDIR
14- BİTİR
*/
#include <stdio.h>

int main() {
    int pozitif_adet = 0;
    int negatif_adet = 0;
    int sayi;
    int i;

    
    for (i = 1; i <= 10; i++) {
        
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        
        if (sayi > 0) {
            pozitif_adet++;
        } else if (sayi < 0) {
            negatif_adet++;
        }
    }

    
    printf("Pozitif sayi adedi: %d\n", pozitif_adet);
    printf("Negatif sayi adedi: %d\n", negatif_adet);

    return 0;
}
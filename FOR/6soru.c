/*6.SORU:Asal Sayı Kontrolü

Kullanıcı bir sayı girsin.
For ile o sayının asal olup olmadığını kontrol et.

1- BAŞLA
2- KULLANICIDAN BİR SAYI GİRİLMESİNİ İSTE
3- SAYIYI AL
4- ASAL_MI = DOĞRU
5- EĞER SAYI < 2 İSE ASAL_MI = YANLIŞ
6- DÖNGÜ İÇİN i = 2 DEN SAYI - 1 E KADAR ARTIRIMLI OLARAK
    7- EĞER SAYI MOD i = 0 İSE ASAL_MI = YANLIŞ
8- DÖNGÜ SONU
9- EĞER ASAL_MI = DOĞRU İSE
    10- "SAYI ASALDIR" YAZDIR
11- DEĞİLSE
    12- "SAYI ASAL DEĞİLDİR" YAZDIR
13- BİTİR
*/
#include <stdio.h>

int main() {
    int sayi, i;
    int asal_mi = 1; 

    
    printf("Bir sayi giriniz: ");
    
    scanf("%d", &sayi);


    if (sayi < 2) {
        asal_mi = 0; 
    } else {
        // 
        for (i = 2; i <= sayi - 1; i++) {
            
            if (sayi % i == 0) {
                asal_mi = 0; 
                break; 
            }
        }
    }

    
    if (asal_mi) {
        
        printf("%d sayisi asaldir.\n", sayi);
    } else {
        
        printf("%d sayisi asal degildir.\n", sayi);
    }

    return 0;
}
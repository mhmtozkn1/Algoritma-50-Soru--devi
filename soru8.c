/*Soru – Bir metin içinde kaç tane boşluk karakteri olduğunu bulan programı yazın.

1-BAŞLA
2-METİNİ OKU
3-BOŞLUK SAYACINI SIFIRLA
4-HER KARAKTER İÇİN
    4.1-EĞER KARAKTER BOŞLUK İSE
        4.1.1-BOŞLUK SAYACINI BİR ARTTIR
5-BOŞLUK SAYACINI YAZDIR
6-BİTİR
*/
#include <stdio.h>
#include <string.h>
#define HACİM 1000

int main() {
    char metin[HACİM];
    int i, bosluk_sayaci = 0;


    printf("Bir metin girin: ");
    fgets(metin, HACİM, stdin);

   
    for (i = 0; i < strlen(metin); i++) {
        
        if (metin[i] == ' ') {
          
            bosluk_sayaci++;
        }
    }

  
    printf("Metindeki boşluk karakteri sayısı: %d\n", bosluk_sayaci);

 
    return 0;
}
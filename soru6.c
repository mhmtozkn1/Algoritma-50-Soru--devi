/*Soru – Kullanıcıdan bir karakter alın. Bu karakterin sesli harf olup olmadığını bulan programı yazın.

1-BAŞLA
2-Kullanıcıdan bir karakter girmesini iste
3-Girilen karakterin sesli harf olup olmadığını kontrol et
4-Sonucu ekrana yazdır
5-BİTİR

*/

#include <stdio.h>

int main() {
    char karakter;

    printf("Bir karakter girin: ");
    scanf("%c", &karakter);


    if (karakter == 'a' || karakter == 'e' || karakter == 'i' || 
        karakter == 'o' || karakter == 'u' || karakter == 'A' || 
        karakter == 'E' || karakter == 'I' || karakter == 'O' || 
        karakter == 'U') {

            printf("%c bir sesli harftir.\n", karakter);
    } else {

        printf("%c bir sesli harf degildir.\n", karakter);
    }
    

    return 0;
}
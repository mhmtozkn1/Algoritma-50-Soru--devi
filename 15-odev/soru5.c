/*Soru – Kullanıcının girdiği kelimenin uzunluğunu strlen kullanmadan bulan programı yazın.

1-BAŞLA
2-Kullanıcıdan bir kelime girmesini iste
3-Kelimenin uzunluğunu bulmak için bir sayaç değişkeni oluştur
4-Kelimenin her karakteri için sayaç değişkenini artır
5-Kelimenin uzunluğunu ekrana yazdır
6-bitir
*/

#include <stdio.h>

int main() {
    char kelime[100];
    int uzunluk = 0;

    // Kullanıcıdan kelime girmesini iste
    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    // Kelimenin uzunluğunu bulmak için sayaç değişkenini artır
    while (kelime[uzunluk] != '\0') {
        uzunluk++;
    }

    // Kelimenin uzunluğunu ekrana yazdır
    printf("Kelimenin uzunlugu: %d\n", uzunluk);

    return 0;
}
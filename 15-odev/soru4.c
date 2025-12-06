/*Soru – 5 elemanlı bir diziye kullanıcıdan değer alıp, diziyi ters sırada ekrana yazdırın.

1-BAŞLA
2-Dizi için 5 elemanlı bir alan oluştur
3-Kullanıcıdan 5 eleman için değer al
4-Diziyi ters sırada ekrana yazdır
5-BİTİR
*/
#include <stdio.h>

int main() {
    int dizi[5];
    int i;

    
    for(i = 0; i < 5; i++) {
        printf("Dizinin %d. elemanını girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    
    printf("Dizinin ters sıradaki elemanları:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d\n", dizi[i]);
    }

    return 0;
}
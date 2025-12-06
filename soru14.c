/*soru 14: 10 elemanlı bir dizi oluştur.
Diziyi yazdırırken 0 değerlerini continue ile geç,
Sadece 0 olmayan elemanları sırayla ekrana yazdır.

1-BAŞLA
2-DİZİ OLUŞTUR (10 ELEMANLI)
3-DÖNGÜ BAŞLAT (İ=0, İ<10, İ++)
4-EĞER DİZİ[İ] == 0 İSE
5-   DEVAM ET
6-EKRANA DİZİ[İ] YAZDIR
7-DÖNGÜ BİTİR
8-BİTİR
*/
#include <stdio.h>

int main() {
    int dizi[10] = {0, 5, 0, 3, 8, 0, 1, 0, 4, 7};
    
    for(int i = 0; i < 10; i++) {
        if(dizi[i] == 0) {
            continue;
        }
        printf("%d\n", dizi[i]);
    }
    
    return 0;
} 
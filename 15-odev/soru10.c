/* SORU 10:Kullanıcıdan 5 elemanlı bir dizi alıp 3. elemanı ekrana yazdıran programı yazın.

1-BAŞLA
2-DİZİ OLUŞTUR (5 ELEMANLI)
3-KULLANICIDAN 5 ELEMAN AL
4-3. ELEMANI YAZDIR
5-BİTİR


*/
#include <stdio.h>

int main() {
    int dizi[5];
    int i;

    
    printf("5 elemanli bir dizi girin:\n");
    for (i = 0; i < 5; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    
    printf("Dizinin 3. elemani: %d\n", dizi[2]);

    return 0;
}
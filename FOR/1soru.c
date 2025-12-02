/*1.SORU:1’den 100’e Kadar 3’ün Katlarını Yaz

For kullanarak 1–100 arasında 3’e tam bölünen sayıları ekrana yazdıran bir C programı yazınız.for döngüsü kullanarak bu işlemi gerçekleştirin.

1-BAŞLA
2-DEĞİŞKENLERİ TANIMLA: i (tam sayı)
3-DÖNGÜ BAŞLAT: i = 1'den i <= 100'e kadar i'yi 1 artırarak tekrarla
    a-EĞER (i % 3 == 0) İSE
        i'yi ekrana yazdır
    b-DEĞİLSE
        İşleme devam et
4-DÖNGÜ BİTİR
5-BİTİR
*/
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
/*2.SORU:1’den N’e Kadar Toplam

Kullanıcı N girsin.
For ile 1’den N’e kadar olan sayıların toplamını bul.

1-BAŞLA
2-DEĞİŞKENLERİ TANIMLA: i, N, toplam (tam sayı)
3-KULLANICIDAN N DEĞERİNİ AL
4-TOPLAMI SIFIRLA: toplam = 0
5-DÖNGÜ BAŞLAT: i = 1'den i <= N'e kadar i'yi 1 artırarak tekrarla
    a-TOPLAMA İŞLEMİ: toplam = toplam + i
6-DÖNGÜ BİTİR
7-TOPLAM DEĞERİNİ EKRANA YAZDIR
8-BİTİR
*/
#include <stdio.h>

int main() {
    int i, N, toplam = 0;

    printf("Bir sayi giriniz (N): ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        toplam += i;
    }

    printf("1'den %d'ye kadar olan sayilarin toplami: %d\n", N, toplam);
    return 0;
}
/*Not Ortalaması – Çıkış İçin 0

Kullanıcı notlar girsin.
0 girildiğinde döngü bitsin.
0 girilene kadar girilen tüm notların ortalamasını hesapla.do while döngüsü kullanarak yapın.

1-BAŞLA
2-Kullanıcıdan not al
3-Not 0 mı? Evet ise 6'ya git. Hayır ise 4'e git.
4-Notu topla ve ikiye böl
5-2'ye git
6-Ortalama yazdır
7-BİTİR


*/
#include <stdio.h>

int main () {
    int not;
    int toplam = 0;
    int sayac = 0;
    float ortalama;

    do {
        printf("Not giriniz (Çıkmak için 0 giriniz): ");
        scanf("%d", &not);

        if (not != 0) {
            toplam += not;
            sayac++;
        }
    } while (not != 0);

    if (sayac > 0) {
        ortalama = (float)toplam / sayac;
        printf("Girilen notların ortalaması: %.2f\n", ortalama);
    } else {
        printf("Hiç not girilmedi.\n");
    }

    return 0;
}
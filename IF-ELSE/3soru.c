/*3.SORU:Ürün İndirimi

Fiyat ve müşteri tipini al:
Müşteri tipi: 1 = öğrenci, 2 = memur, 3 = emekli

Öğrenci %10

Memur %5

Emekli %15 indirim
Başka değer girilirse “Müşteri tipi hatalı.”

Son fiyatı hesapla.
ALGORİTMA
1-BAŞLA
2-KULLANICIDAN FIYAT AL:FIYAT
3-KULLANICIDAN MUSTERI_TIPI AL:MUSTERI_TIPI
4-EĞER MUSTERI_TIPI = 1 İSE
    FIYAT = FIYAT - (FIYAT * 0.10)
5-DEĞİLSE EĞER MUSTERI_TIPI = 2 İSE
    FIYAT = FIYAT - (FIYAT * 0.05)
6-DEĞİLSE EĞER MUSTERI_TIPI = 3 İSE
    FIYAT = FIYAT - (FIYAT * 0.15)
7-DEĞİLSE
    "Müşteri tipi hatalı." YAZDIR
8-FIYAT'I EKRANA YAZDIR
9-BİTİR
*/
#include <stdio.h>

int main() {
    float fiyat;
    int musteri_tipi;

    printf("Urun fiyatini giriniz: ");
    scanf("%f", &fiyat);
    printf("Musteri tipini giriniz (1=ogrenci, 2=memur, 3=emekli): ");
    scanf("%d", &musteri_tipi);

    if (musteri_tipi == 1) {
        fiyat = fiyat - (fiyat * 0.10);
    } else if (musteri_tipi == 2) {
        fiyat = fiyat - (fiyat * 0.05);
    } else if (musteri_tipi == 3) {
        fiyat = fiyat - (fiyat * 0.15);
    } else {
        printf("Musteri tipi hatali.\n");
        return 0;
    }

    printf("Son fiyat: %.2f\n", fiyat);
    return 0;
}
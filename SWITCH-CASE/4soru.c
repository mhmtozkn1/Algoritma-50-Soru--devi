/* 4.SORU:Bir İç çamaşır dükkanında çorap satılmaktadır. Çorapların birim fiyatı 5 TL'dir. Alınan çorap sayısı  belli aralıklarda belli ücrete satılmaktadır.
Alınan çorap sayısı arttığı vakit ücret de düşmektedir. Buna göre aşağıdaki tabloya göre toplam tutarı hesaplayan switch-case yapısında C programını yazınız.

1-BAŞLA
2-KUMAŞ_MİKTARINI_AL
3-ÇORAP_SAYISINI_AL
4-ÇORAP_BİRİM_FİYATINI_BELİRLE
5-TOPLAM_TUTARI_HESAPLA
6-SONUÇLARI_YAZDIR


*/
#include <stdio.h>

int main () {
    int corap_sayisi;
    float toplam_tutar;
    const float birim_fiyat = 5.0;

    printf("Alınan çorap sayısını giriniz: ");
    scanf("%d", &corap_sayisi);

    switch (corap_sayisi) {
        case 1 ... 10:
            toplam_tutar = corap_sayisi * birim_fiyat;
            break;
        case 11 ... 20:
            toplam_tutar = corap_sayisi * (birim_fiyat * 0.9); // %10 indirim
            break;
        case 21 ... 50:
            toplam_tutar = corap_sayisi * (birim_fiyat * 0.8); // %20 indirim
            break;
        case 51 ... 100:
            toplam_tutar = corap_sayisi * (birim_fiyat * 0.7); // %30 indirim
            break;
        default:
            if (corap_sayisi > 100) {
                toplam_tutar = corap_sayisi * (birim_fiyat * 0.6); // %40 indirim
            } else {
                toplam_tutar = 0; // Geçersiz giriş
            }
            break;
    }

    if (toplam_tutar > 0) {
        printf("Toplam tutar: %.2f TL\n", toplam_tutar);
    } else {
        printf("Geçersiz çorap sayısı girdiniz.\n");
    }

    return 0;
}

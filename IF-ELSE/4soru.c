/*4.soru:Çiftlik Ürün Kontrolü

Kullanıcıdan tavuk sayısı, inek sayısı ve koyun sayısı al.
Toplam hayvan sayısını hesapla.

0 hayvan → “Çiftlik boş.”

1–20 → “Küçük çiftlik”

21–100 → “Orta çiftlik”

100+ → “Büyük çiftlik”

ALGORİTMA
1-BAŞLA
2-KULLANICIDAN TAVUK_SAYISI AL:TAVUK_SAYISI
3-KULLANICIDAN INEK_SAYISI AL:INEK_SAYISI
4-KULLANICIDAN KOYUN_SAYISI AL:KOYUN_SAYISI
5-TOPLAM_HAYVAN = TAVUK_SAYISI + INEK_SAYISI + KOYUN_SAYISI
6-EĞER TOPLAM_HAYVAN = 0 İSE
    "Çiftlik boş." YAZDIR
7-DEĞİLSE EĞER TOPLAM_HAYVAN <= 20 İSE
    "Küçük çiftlik" YAZDIR
8-DEĞİLSE EĞER TOPLAM_HAYVAN <= 100 İSE
    "Orta çiftlik" YAZDIR
9-DEĞİLSE
    "Büyük çiftlik" YAZDIR
10-BİTİR
*/
#include <stdio.h>

int main () {
    int tavuk_sayisi, inek_sayisi, koyun_sayisi;
    int toplam_hayvan;

    printf("Tavuk sayisini giriniz: ");
    scanf("%d", &tavuk_sayisi);
    printf("Inek sayisini giriniz: ");
    scanf("%d", &inek_sayisi);
    printf("Koyun sayisini giriniz: ");
    scanf("%d", &koyun_sayisi);

    toplam_hayvan = tavuk_sayisi + inek_sayisi + koyun_sayisi;

    if (toplam_hayvan == 0) {
        printf("Ciftlik bos.\n");
    } else if (toplam_hayvan <= 20) {
        printf("Kucuk ciftlik\n");
    } else if (toplam_hayvan <= 100) {
        printf("Orta ciftlik\n");
    } else {
        printf("Buyuk ciftlik\n");
    }

    return 0;
}
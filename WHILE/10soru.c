/*10.SORU:Evde Wi-Fi Çekene Kadar Modem Yanına Gitme

Kullanıcıdan Wi-Fi sinyal seviyesini al (0 ile 5 arası).
Hedef seviye: 3 veya daha büyük.

While sinyal < 3:
“Modeme biraz daha yaklaşıyorsun…” yaz
Her turda sinyalı +1 arttır.

Sinyal ≥ 3 olunca:
“Bağlantı kuruldu, Instagram açılabilir.” yaz.

1-BAŞLA
2-Kullanıcıdan Wi-Fi sinyal seviyesini al
3-Sinyal seviyesi 3’ten küçük olduğu sürece 5.adıma git
4-Adım 7’ye git
5-“Modeme biraz daha yaklaşıyorsun…” yazdır
6-Sinyal seviyesini 1 artır
7-Adım 3’e git
8-“Bağlantı kuruldu, Internet artık daha güçlü.” yazdır
9-BİTİR
*/
#include <stdio.h>

int main() {
    int sinyal_seviyesi;

    printf("Wi-Fi sinyal seviyesini girin (0-5 arası): ");
    scanf("%d", &sinyal_seviyesi);

    while (sinyal_seviyesi < 3) {
        printf("Modeme biraz daha yaklaşıyorsun...\n");
        sinyal_seviyesi++;
    }

    printf("Bağlantı kuruldu,Internet artık daha güçlü .\n");

    return 0;
}
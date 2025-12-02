/*4.SORU:Asansörün taşıma sınırı: 500 kg
Kullanıcı sırayla kişiler için ağırlık giriyor.
Toplam ağırlık 500’ü geçene kadar döngü sürsün.
Geçtiği anda: “Asansör kapasitesi doldu.” yaz.

1-BAŞLA
2-KİŞİ AĞIRLIĞINI GİR AĞIRLIK
3-TOPLAM AĞIRLIK=0
4- WHILE TOPLAM AĞIRLIK<=500 TEKRARLA
    4.1-TOPLAM AĞIRLIK=TOPLAM AĞIRLIK+AĞIRLIK
    4.2-EĞER TOPLAM AĞIRLIK>500 İSE
        4.2.1-YAZ "ASANSÖR KAPASİTESİ DOLDU."
    4.3-DEĞİLSE
        4.3.1-KİŞİ AĞIRLIĞINI GİR AĞIRLIK
5-BİTİR

*/
#include <stdio.h>

int main () {
    int agirlik;
    int toplam_agirlik = 0;

    printf("Kisi agirligini girin (kg): ");
    scanf("%d", &agirlik);

    while (toplam_agirlik <= 500) {
        toplam_agirlik += agirlik;

        if (toplam_agirlik > 500) {
            printf("Asansor kapasitesi doldu.\n");
        } else {
            printf("Kisi agirligini girin (kg): ");
            scanf("%d", &agirlik);
        }
    }

    return 0;
}
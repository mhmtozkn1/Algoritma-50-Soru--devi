/*7.SORU:Oda Sıcaklığı Ayarlama

Ideal sıcaklık: 22°C
Kullanıcı mevcut sıcaklığı giriyor.
While döngüsünde:

Değer 22’den farklı olduğu sürece “Ayarlanıyor...” yaz.

22 olduğunda “Oda ideal sıcaklıkta.” yazıp dur.

1-BAŞLA
2-IDEAL_SICAKLIK=22
3-KULLANICI SICAKLIK GİR SICAKLIK
4-WHILE SICAKLIK!=IDEAL_SICAKLIK TEKRARLA
    4.1-YAZ "AYARLANIYOR..."
    4.2-KULLANICI SICAKLIK GİR SICAKLIK
5-YAZ "ODA IDEAL SICAKLIKTA."
6-BİTİR

*/
#include <stdio.h>

int main () {
    const int IDEAL_SICAKLIK = 22;
    int sicaklik;

    printf("Oda sicakligini girin: ");
    scanf("%d", &sicaklik);

    while (sicaklik != IDEAL_SICAKLIK) {
        printf("Ayarlaniyor...\n");
        printf("Oda sicakligini girin: ");
        scanf("%d", &sicaklik);
    }

    printf("Oda ideal sicaklikta.\n");

    return 0;
}
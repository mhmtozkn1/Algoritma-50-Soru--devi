/*7.SORU:Sıcaklık Durumu

Kullanıcı sıcaklık (°C) girsin:

0 altı → “Donma riski”

0–15 → “Soğuk”

16–25 → “Ilık”

26–35 → “Sıcak”

35 üstü → “Aşırı sıcak”

Algoritma:
1. Başla
2. Sıcaklık değerini al
3. Eğer sıcaklık < 0 ise
    a. "Donma riski" mesajını göster
4. Değilse eğer sıcaklık >= 0 ve sıcaklık <= 15 ise
    a. "Soğuk" mesajını göster
5. Değilse eğer sıcaklık >= 16 ve sıcaklık <= 25 ise
    a. "Ilık" mesajını göster
6. Değilse eğer sıcaklık >= 26 ve sıcaklık <= 35 ise
    a. "Sıcak" mesajını göster
7. Değilse eğer sıcaklık > 35 ise
    a. "Aşırı sıcak" mesajını göster
8. Bitir
*/

#include <stdio.h>

int main () {
    float sicaklik;

    printf("Sıcaklık değerini °C cinsinden giriniz: ");
    scanf("%f", &sicaklik);

    if (sicaklik < 0) {
        printf("Donma riski\n");
    } else if (sicaklik >= 0 && sicaklik <= 19) {
        printf("Soğuk\n");
    } else if (sicaklik >= 20 && sicaklik <= 25) {
        printf("Ilık\n");
    } else if (sicaklik >= 26 && sicaklik <= 35) {
        printf("Sıcak\n");
    } else {
        printf("Aşırı sıcak\n");
    }

    return 0;
}
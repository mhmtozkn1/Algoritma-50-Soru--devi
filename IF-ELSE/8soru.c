/*8.SORU:Günlük spor rutini seçtiren programı yazınız. Kullanıcıya 3 seçenek sunulacak:
1.Yürüyüş 2.Koşu 3.Bisiklet. Kullanıcı seçimine göre ekrana ilgili spor rutinini yazdırınız.

1-BAŞLA
2-KULLANICIYA SPOR SEÇENEKLERİNİ SUN
3-KULLANICIDAN SEÇİM AL
4- EĞER SEÇİM 1 İSE
    4.1-EKRANA "30 DAKİKA YÜRÜYÜŞ YAPIN" YAZDIR
    4.2-ADIM 6'YA GİT
5-EĞER SEÇİM 2 İSE
    5.1-EKRANA "20 DAKİKA KOŞU YAPIN" YAZDIR
    5.2-ADIM 6'YA GİT
6-EĞER SEÇİM 3 İSE
    6.1-EKRANA "25 DAKİKA BİSİKLET SÜRÜN" YAZDIR
7- BİTİR

*/
#include <stdio.h>

int main() {
    int secim;

    printf("Günlük Spor Rutini Seçiniz:\n");
    printf("1. Yürüyüş\n");
    printf("2. Koşu\n");
    printf("3. Bisiklet\n");
    printf("Seçiminizi yapınız (1-3): ");
    scanf("%d", &secim);

    if (secim == 1) {
        printf("30 dakika yürüyüş yapın.\n");
    } else if (secim == 2) {
        printf("20 dakika koşu yapın.\n");
    } else if (secim == 3) {
        printf("25 dakika bisiklet sürün.\n");
    } else {
        printf("Geçersiz seçim. Lütfen 1, 2 veya 3 seçiniz.\n");
    }

    return 0;
}
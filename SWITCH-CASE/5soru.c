/*5.SORU: Hava durumuna göre kıyafet öneren program yazınız.
SORU ALGORİTMASI
1-Başla
2-Değişkenleri tanımla: int sicaklik; string kiyafet;
3-Kullanıcıdan sicaklik değerini al
4-switch(sicaklik)
  case sicaklik >=30: kiyafet="Tişört ve Şort"; break;
  case sicaklik >=20 && sicaklik <30: kiyafet="Gömlek ve Pantolon"; break;
  case sicaklik >=10 && sicaklik <20: kiyafet="Sweatshirt ve Jean"; break;
  case sicaklik <10: kiyafet="Mont ve Kalın Kıyafetler"; break;
  5-default: kiyafet="Geçersiz Değer"; break;
6-Sonuçları ekrana yazdır
7-Bitir
*/
#include <stdio.h>

int main () {
    int sicaklik;
    char *kiyafet;

    
    printf("Lütfen günün sıcaklık değerini giriniz (°C): ");
    scanf("%d", &sicaklik);

    
    switch (sicaklik) {
        case 30 ... 100:  // 30 ve üzeri
            kiyafet = "Tişört ve Şort";
            break;
        case 20 ... 29:   // 20-29 arası
            kiyafet = "Gömlek ve Pantolon";
            break;
        case 10 ... 19:   // 10-19 arası
            kiyafet = "Sweatshirt ve Jean";
            break;
        case -100 ... 9:  // 9 ve altı
            kiyafet = "Mont ve Kalın Kıyafetler";
            break;
        default:
            kiyafet = "Geçersiz Değer";
            break;
    }

    
    printf("Önerilen kıyafet: %s\n", kiyafet);

    return 0;
}
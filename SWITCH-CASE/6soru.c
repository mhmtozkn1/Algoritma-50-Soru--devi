/*6.SORU :Telefon şarj seviyesine göre uyarı verme programı yazınız.
Şarj seviyesi %80 ve üzeri ise "Şarjınız Yeterli", %50-%79 arası ise "Şarjınız Orta", %20-%49 arası ise "Şarjınız Düşük", %0-%19 arası ise "Şarjınız Çok Düşük" şeklinde çıktı veren programı switch-case yapısı kullanarak kodlayınız.
SORU ALGORİTMASI
1-Başla
2-Değişkenleri tanımla: int sarj; string uyarı;
3-Kullanıcıdan sarj değerini al
4-switch(sarj)
  case sarj >=80: uyarı="Şarjınız Yeterli"; break;
  case sarj >=50 && sarj <80: uyarı="Şarjınız Orta"; break;
  case sarj >=20 && sarj <50: uyarı="Şarjınız Düşük"; break;
  case sarj >=0 && sarj <20: uyarı="Şarjınız Çok Düşük"; break;
  5-default: uyarı="Geçersiz Değer"; break;
6-Sonuçları ekrana yazdır
7-Bitir
*/
#include <stdio.h>

int main () {
    int sarj;
    char *uyarı;

    
    printf("Lütfen telefon şarj seviyesini giriniz (%): ");
    scanf("%d", &sarj);

    
    switch (sarj) {
        case 80 ... 100:  // %80 ve üzeri
            uyarı = "Şarjınız Yeterli";
            break;
        case 50 ... 79:   // %50-%79 arası
            uyarı = "Şarjınız Orta";
            break;
        case 20 ... 49:   // %20-%49 arası
            uyarı = "Şarjınız Düşük";
            break;
        case 0 ... 19:    // %0-%19 arası
            uyarı = "Şarjınız Çok Düşük";
            break;
        default:
            uyarı = "Geçersiz Değer";
            break;
    }

    
    printf("Uyarı: %s\n", uyarı);

    return 0;
}
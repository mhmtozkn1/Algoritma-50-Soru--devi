/* 1-Soru :Çağrı merkezinde müşteri temsilcisi ile görüştükten sonra müşteriye memnuniyet anketi yapılacaktır.
Eğer Çağrı merkezi ve müşteri temsilcisi değerlendirme anketinde alınan verilerin ortalması 5 ise "Çok Memnun"4 ise "Memnun", 3 
ise "Ne Memnun Ne Değil", 2 ise "Memnun Değil", 1 ise "Çok Memnun Değil" şeklinde çıktı veren programı switch-case yapısı kullanarak kodlayınız.

SORU ALGORİTMASI
1-Başla
2-Değişkenleri tanımla: int v1,v2,ort; string sonuc;
3-Kullanıcıdan v1 ve v2 değerlerini al
4-ort=(v1+v2)/2
5-switch(ort)
  case 5: sonuc="Çok Memnun"; break;
  case 4: sonuc="Memnun"; break;
  case 3: sonuc="Ne Memnun Ne Değil"; break;
  case 2: sonuc="Memnun Değil"; break;
  case 1: sonuc="Çok Memnun Değil"; break;
  6-default: sonuc="Geçersiz Değer"; break;
7-Sonuçları ekrana yazdır
8-Bitir
*/
#include <stdio.h> 

int main() {
    int v1, v2, ort;
    char *sonuc;

    // Kullanıcıdan değerleri al
    printf("Müşteri temsilcisi değerlendirme notunu giriniz (1-5): ");
    scanf("%d", &v1);
    printf("Çağrı merkezi değerlendirme notunu giriniz (1-5): ");
    scanf("%d", &v2);

    // Ortalama hesapla
    ort = (v1 + v2) / 2;

    // Değerlendirme sonucu belirle
    switch (ort) {
        case 5:
            sonuc = "Çok Memnun";
            break;
        case 4:
            sonuc = "Memnun";
            break;
        case 3:
            sonuc = "Ne Memnun Ne Değil";
            break;
        case 2:
            sonuc = "Memnun Değil";
            break;
        case 1:
            sonuc = "Çok Memnun Değil";
            break;
        default:
            sonuc = "Geçersiz Değer";
            break;
    }

    // Sonucu ekrana yazdır
    printf("Müşteri memnuniyet durumu: %s\n", sonuc);

    return 0;
}
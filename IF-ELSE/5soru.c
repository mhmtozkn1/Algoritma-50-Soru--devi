/*5.SORU: Elinde x kadar parası olan bir kimse her gün ne kadar harcayacağını yazacak ve program bu harcamaya göre parasının kaç yıl 
kaç ay ve kaç gün sonra biteceğini hesaplayacak.

    1-BAŞLA
    2-KULLANICIDAN TOPLAM PARAYI GİRMEYİ İSTE
    3-KULLANICIDAN GÜNLÜK HARCAMAYI GİRMEYİ İSTE
    4-PARANIN BİTME SÜRESİNİ HESAPLA
        4.1-YIL, AY VE GÜN OLARAK HESAPLA
    5-SONUCU EKRANA YAZDIR
    6-BİTİR
    */
#include <stdio.h>

int main () {
    double toplamPara, gunlukHarcama;
    int toplamGun, yil, ay, gun;

   
    printf("Lütfen toplam paranızı giriniz: ");
    scanf("%lf", &toplamPara);
    
    printf("Lütfen günlük harcamanızı giriniz: ");
    scanf("%lf", &gunlukHarcama);
   
    if (gunlukHarcama <= 0) {
        printf("Günlük harcama sıfır veya negatif olamaz.\n");
        return 1;
    }else if (toplamPara < 0) {
        printf("Toplam para negatif olamaz.\n");
        return 1;
    }
    toplamGun = (int)(toplamPara / gunlukHarcama);
    yil = toplamGun / 365;
    ay = (toplamGun % 365) / 30;
    gun = (toplamGun % 365) % 30;
   
    printf("Paranız %d yıl, %d ay ve %d gün sonra bitecektir.\n", yil, ay, gun);
    return 0;
}
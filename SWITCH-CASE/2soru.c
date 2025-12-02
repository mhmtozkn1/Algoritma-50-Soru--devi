/*3.SORU: Bir kimse bankaya vadeli para yatırmak istemektedir. Kullanıcıdan yatırmak istediği para miktarını,
 kaç yıl vadeli yatırmak istediğini alan ve toplam paranın ne kadar olacağını hesaplayan programı switch-case yapısını kullanarak
yazınız. (Basit kar oranı uygulanacaktır.)

1-BAŞLA 
2-Kullanıcıdan para miktarını al (ana para)
3-Kullanıcıdan kaç yıl vadeli yatırmak istediğini al
4-Switch-case yapısını kullanarak yıllara göre kar oranlarını belirle
   1 yıl için %10
   2 yıl için %15
   3 yıl için %20
5-Toplam parayı hesapla (Toplam Para = Ana Para + (Ana Para * Kar Oranı))
6-Sonuçları ekrana yazdır
*/
#include <stdio.h>

int main () {
    float oran, toplam_para, ana_para;
    int yil;
    printf("Yatirmak istediginiz para miktarini giriniz: ");
    scanf("%f", &ana_para);
    printf("Kac yil vadeli yatirmak istiyorsunuz (1, 2, veya 3): ");
    scanf("%d", &yil);
    switch(yil) {
        case 1:
            oran = 0.10;
            break;
        case 2:
            oran = 0.15;
            break;
        case 3:
            oran = 0.20;
            break;
        default:
            printf("Gecersiz yil secimi. Lutfen 1, 2 veya 3 giriniz.\n");
            return 1;
    }
    toplam_para = ana_para + (ana_para * oran);
    printf("Toplam para miktariniz: %.2f\n", toplam_para);
    return 0;
}
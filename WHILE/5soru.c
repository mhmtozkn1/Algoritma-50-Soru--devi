/*5.SORU:ATM Para Çekme Döngüsü

Başlangıç bakiyesi 1000 TL.
Kullanıcı para çekiyor.
Her işlemde:

Eğer bakiyeden büyük para çekerse “Yetersiz bakiye” de.

Eğer bakiye 0 olursa döngü bitip “Hesap boşaldı” yaz.

1-BAŞLA
2-BAKİYE=1000
3-PARA ÇEKMEK İÇİN TUTAR GİR TUTAR
4-WHILE BAKİYE>0 TEKRARLA   
    4.1-EĞER TUTAR>BAKİYE İSE
        4.1.1-YAZ "YETERSİZ BAKİYE"
    4.2-DEĞİLSE
        4.2.1-BAKİYE=BAKİYE-TUTAR   
    4.3-EĞER BAKİYE==0 İSE
        4.3.1-YAZ "HESAP BOŞALDI"
    4.4-DEĞİLSE
        4.4.1-PARA ÇEKMEK İÇİN TUTAR GİR TUTAR
5-BİTİR

*/
#include <stdio.h>

int main () {
    int bakiye = 1000;
    int tutar;

    printf("Para cekmek icin tutar girin (TL): ");
    scanf("%d", &tutar);

    while (bakiye > 0) {
        if (tutar > bakiye) {
            printf("Yetersiz bakiye.\n");
        } else {
            bakiye -= tutar;
        }

        if (bakiye == 0) {
            printf("Hesap bosaldi.\n");
        } else {
            printf("Para cekmek icin tutar girin (TL): ");
            scanf("%d", &tutar);
        }
    }

    return 0;
}
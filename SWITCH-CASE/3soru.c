/*3.SORU: Switch-case kullanarak bir program yazınız. Program kullanıcıdan havadaki nem oranını yüzde olarak girmesini istesin.
    Nem oranına göre aşağıdaki çıktıları versin:
    %0-30 arası: Hava çok kuru
    %31-60 arası: Hava normal
    %61-100 arası: Hava çok nemli
    Geçersiz bir değer girilirse "Geçersiz nem oranı" mesajı verilsin.

    1-BAŞLA
    2-KULLANICIDAN NEM ORANINI GİRMEYİ İSTE
    3-NEM ORANINA GÖRE DURUMU BELİRLE
        3.1-%0-30 ARASI İSE "HAVA ÇOK KURU" MESAJI VER
        3.2-%31-60 ARASI İSE "HAVA NORMAL" MESAJI VER
        3.3-%61-100 ARASI İSE "HAVA ÇOK NEMLİ" MESAJI VER
        3.4-GEÇERSİZ DEĞER İSE "GEÇERSİZ NEM ORANI" MESAJI VER
    4-BİTİR
    */
#include <stdio.h>

int main () {
    int nemOrani;

    
    printf("Lütfen havadaki nem oranını yüzde olarak giriniz (0-100): ");
    scanf("%d", &nemOrani);

   
    switch (nemOrani / 31) { // 0-30 arası 0, 31-60 arası 1, 61-100 arası 2
        case 0:
            printf("Hava çok kuru\n");
            break;
        case 1:
            printf("Hava normal\n");
            break;
        case 2:
            if (nemOrani <= 100) {
                printf("Hava çok nemli\n");
            } else {
                printf("Geçersiz nem oranı\n");
            }
            break;
        default:
            printf("Geçersiz nem oranı\n");
            break;
    }

    return 0;
}

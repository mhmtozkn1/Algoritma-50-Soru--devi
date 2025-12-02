/*10.SORU: TV kumandasında butonlara basıldığında farklı işlemler gerçekleşir. 
    Aşağıdaki işlemleri gerçekleştiren bir program yazınız:
    1- TV AÇMA/KAPAMA (1)
    2- SES ARTTIRMA (2)
    3- SES AZALTMA (3)
    4- KANAL DEĞİŞTİRME (4)
    5- ÇIKIŞ (0)

    Program kullanıcıdan bir buton numarası girmesini istesin ve ilgili işlemi gerçekleştirsin.
    Geçersiz bir buton numarası girilirse "Geçersiz buton" mesajı verilsin.

    1-BAŞLA
    2-KULLANICIDAN BUTON NUMARASINI GİRMEYİ İSTE
    3-BUTON NUMARASINA GÖRE İŞLEMİ GERÇEKLEŞTİR
        3.1-1 İSE "TV AÇILDI/KAPANDI" MESAJI VER
        3.2-2 İSE "SES ARTTIRILDI" MESAJI VER
        3.3-3 İSE "SES AZALTILDI" MESAJI VER
        3.4-4 İSE "KANAL DEĞİŞTİRİLDİ" MESAJI VER
        3.5-0 İSE PROGRAMDAN ÇIKIŞ YAP
        3.6-GEÇERSİZ DEĞER İSE "GEÇERSİZ BUTON" MESAJI VER
    4-BİTİR
    */
#include <stdio.h>

int main () {
    int butonNumarasi;

    printf("Lütfen bir buton numarası giriniz (1: TV AÇMA/KAPAMA, 2: SES ARTTIRMA, 3: SES AZALTMA, 4: KANAL DEĞİŞTİRME, 0: ÇIKIŞ): ");
    scanf("%d", &butonNumarasi);

    switch (butonNumarasi) {
        case 1:
            printf("TV AÇILDI/KAPANDI\n");
            break;
        case 2:
            printf("SES ARTTIRILDI\n");
            break;
        case 3:
            printf("SES AZALTILDI\n");
            break;
        case 4:
            printf("KANAL DEĞİŞTİRİLDİ\n");
            break;
        case 0:
            printf("Programdan çıkılıyor...\n");
            break;
        default:
            printf("Geçersiz buton\n");
            break;
    }

    return 0;
}
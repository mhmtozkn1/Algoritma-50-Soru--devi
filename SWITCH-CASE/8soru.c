/*8.SORU:Taşıt türüne göre otopark ücreti hesaplayan C programını yazınız.

    Taşıt Türü        Ücret
    1-Araba           10 TL
    2-Motosiklet     5 TL
    3-Kamyon         15 TL

    Kullanıcıdan taşıt türünü alan ve buna göre ücreti ekrana yazdıran programı yazınız.Switch-case yapısını kullanınız.  
    
    1-BAŞLA
    2-KULLANICIDAN taşıt türünü AL
    3-TAŞIT TÜRÜNE GÖRE ÜCRETİ HESAPLA
    4-ÜCRETİ EKRANA YAZDIR
    5-BİTİR
    */
#include <stdio.h>

int main() {
    int tasit_turu;
    int ucret;

    
    printf("Taşıt türünü seçiniz (1-Araba, 2-Motosiklet, 3-Kamyon): ");
    scanf("%d", &tasit_turu);

    
    switch (tasit_turu) {
        case 1:
            ucret = 10;
            break;
        case 2:
            ucret = 5;
            break;
        case 3:
            ucret = 15;
            break;
        default:
            printf("Geçersiz taşıt türü!\n");
            return 1; 
    }

   
    printf("Otopark ücreti: %d TL\n", ucret);

    return 0; 
}

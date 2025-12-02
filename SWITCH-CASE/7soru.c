/*7.Soru: Market kasasında ürün türüne göre KDV hesaplama programı yazınız.
    Ürün türleri ve KDV oranları:
    - Gıda ürünleri: %8
    - Elektronik ürünler: %18
    - Diğer ürünler: %10
    Program, kullanıcıdan ürün türünü ve fiyatını almalı, ardından KDV'li fiyatı hesaplayıp ekrana yazdırmalıdır.Switch-case yapısı kullanılmalıdır.

    1-BAŞLA
    2-Kullanıcıdan ürün türünü al (gıda, elektronik, diğer)
    3-Kullanıcıdan ürün fiyatını al
    4-Switch-case yapısı ile ürün türüne göre KDV oranını belirle
        a-Gıda ürünleri için %8 KDV
        b-Elektronik ürünler için %18 KDV
        c-Diğer ürünler için %10 KDV
    5-KDV'li fiyatı hesapla: KDV'li Fiyat = Ürün Fiyatı + (Ürün Fiyatı * KDV Oranı)
    6-Ekrana KDV'li fiyatı yazdır
    7-BİTİR

    
*/
#include <stdio.h>

int main() {
    char urun_turu;
    float urun_fiyati, kdv_orani, kdv_li_fiyat;

    
    printf("Urun turunu giriniz (g: gida, e: elektronik, d: diger): ");
    scanf(" %c", &urun_turu);

    
    printf("Urun fiyatini giriniz: ");
    scanf("%f", &urun_fiyati);

    
    switch(urun_turu) {
        case 'g':
            kdv_orani = 0.08; 
            break;
        case 'e':
            kdv_orani = 0.18; 
            break;
        case 'd':
            kdv_orani = 0.10; 
            break;
        default:
            printf("Gecersiz urun turu girdiniz.\n");
            return 1; 
    }

    kdv_li_fiyat = urun_fiyati + (urun_fiyati * kdv_orani);

    
    printf("KDV'li Fiyat: %.2f\n", kdv_li_fiyat);

    return 0;
}
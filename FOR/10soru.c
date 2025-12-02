/*10.SORU:Girilen Sayının Tersini Oluştur 

Kullanıcı pozitif bir tam sayı girsin.
For döngüsünü kullanarak sayının ters çevrilmiş hâlini oluştur.

1-BAŞLA
2-KULLANICIDAN BİR POZİTİF TAM SAYI GİRİLMESİNİ İSTE
3-SAYIYI BİR DEĞİŞKENE ATAYIN
4-TERS_SAYIYI 0'A EŞİTLE
5-SAYI SIFIRDAN BÜYÜK VEYA EŞİT
6-    BASAMAK = SAYI MOD 10
7-    TERS_SAYIYI (TERS_SAYI * 10) + BASAMAK YAP
8-    SAYIYI 10'A BÖL
9-TEKRARLA 5. ADIMA
10-EKRANA TERS_SAYIYI YAZDIR
11-BİTİR
*/ 
#include <stdio.h>

int main() {
    int sayi, basamak, ters_sayi = 0;

    
    printf("Pozitif bir tam sayi giriniz: ");
    scanf("%d", &sayi);
    
    for (; sayi != 0; sayi /= 10) {
        basamak = sayi % 10; 
        ters_sayi = (ters_sayi * 10) + basamak; 
    }
    
    printf("Sayinin tersi: %d\n", ters_sayi);
    return 0;
}
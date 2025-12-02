/*9.SORU:Sayının Kaç Tane 9 İçerdiğini Bul

Kullanıcı bir tam sayı girsin.
For döngüsü içinde sayının her basamağını kontrol et.
Basamaklardan kaç tanesi 9 ise onları say. For döngüsü kullanılarak bu işlem yapılsın.

1-BAŞLA
2-KULLANICIDAN BİR TAM SAYI GİRİLMESİNİ İSTE
3-SAYIYI BİR DEĞİŞKENE ATAYIN
4-9_SAYACINI 0'A EŞİTLE
5-SAYI SIFIRDAN BÜYÜK VEYA EŞİT
6-    BASAMAK = SAYI MOD 10
7-    EĞER BASAMAK 9'A EŞİT İSE
8-        9_SAYACINI 1 ARTIR
9-    SAYIYI 10'A BÖL
10-TEKRARLA 5. ADIMA
11-EKRANA 9_SAYACINI YAZDIR
12-BİTİR
*/
#include <stdio.h>

int main() {
    int sayi, basamak, dokuz_sayaci = 0;

    
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);
    
    for (; sayi != 0; sayi /= 10) {
        basamak = sayi % 10; 
        if (basamak == 9) { 
            dokuz_sayaci++; 
        }
    }
    
    printf("Sayida %d tane 9 vardir.\n", dokuz_sayaci);
    return 0;
}


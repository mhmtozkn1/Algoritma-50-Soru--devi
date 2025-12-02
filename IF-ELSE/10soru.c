/*10.SORU:Kart Türü Belirleme

Kullanıcı kredi kartı numarasının ilk 1 rakamını girsin:

4 ile başlıyorsa → VISA

5 ile başlıyorsa → MasterCard

3 ile başlıyorsa → American Express
Diğer → “Bilinmeyen kart.”

1-BAŞLA
2-KULLANICIDAN KART NUMARASININ İLK RAKAMINI GİRMEYİ İSTE
3-EĞER RAKAM 4 İSE
    4-KART TÜRÜNÜN VISA OLDUĞUNU YAZDIR
5-EĞER RAKAM 5 İSE
    6-KART TÜRÜNÜN MASTERCARD OLDUĞUNU YAZDIR
7-EĞER RAKAM 3 İSE
    8-KART TÜRÜNÜN AMERICAN EXPRESS OLDUĞUNU YAZDIR
9-DEĞİLSE
    10-KART TÜRÜNÜN BİLİNMEYEN KART OLDUĞUNU YAZDIR
11-BİTİR
*/
#include <stdio.h>

int main() {
    int ilk_basamak;

    
    printf("Kredi karti numarasinin ilk rakamini giriniz: ");
    scanf("%d", &ilk_basamak);

    
    if (ilk_basamak == 4) {
        printf("Kart turu: VISA\n");
    } else if (ilk_basamak == 5) {
        printf("Kart turu: MasterCard\n");
    } else if (ilk_basamak == 3) {
        printf("Kart turu: American Express\n");
    } else {
        printf("Kart turu: Bilinmeyen kart.\n");
    }

    return 0;
}
/*10.SORU:“Devam etmek istiyor musun? (e/h)”

Do-while döngüsüyle, kullanıcı yalnızca 'e' veya 'h' girene kadar tekrar sor.

'e' girerse → “Devam ediliyor…”

'h' girerse → “Program sonlandırıldı.” yaz.

Başka karakter girerse tekrar sor.

Algoritma
1-BAŞLA
2-DO
    A-KULLANICIDAN 'e' VEYA 'h' GİRİŞİ AL
    B-EĞER GİRİLEN DEĞER 'e' İSE
        I-“Devam ediliyor…” YAZDIR
    C-EĞER GİRİLEN DEĞER 'h' İSE
        I-“Program sonlandırıldı.” YAZDIR
3-WHİLE(GİRİLEN DEĞER 'e' VEYA 'h' DEĞİL)
4-BİTİR
*/
#include <stdio.h>

int main() {
    char cevap;

    do {
        printf("Devam etmek istiyor musun? (e/h): ");
        scanf(" %c", &cevap);

        if (cevap == 'e') {
            printf("Devam ediliyor...\n");
        } else if (cevap == 'h') {
            printf("Program sonlandırıldı.\n");
        }
    } while (cevap != 'e' && cevap != 'h');

    return 0;
}
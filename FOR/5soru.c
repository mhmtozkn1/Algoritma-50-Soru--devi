/*5.SORU: Bir Aralıktaki Sayı Adedi

Kullanıcıdan başlangıç ve bitiş değeri al.
For ile o aralıktaki sayıların kaç tane olduğunu hesapla.
(ör: 10–27 → 18 sayı)

1-BAŞLA
2-KULLANICIDAN BAŞLANGIÇ VE BİTİŞ DEĞERİNİ AL
3-SAYACI 0'A EŞİTLE
4-BAŞLANGIÇ DEĞERİNDEN BİTİŞ DEĞERİNE KADAR DÖNGÜ OLUŞTUR
    4.1-SAYACI 1 ARTIR
5-EKRANA SAYACI YAZDIR
6-BİTİR
*/
#include <stdio.h>

int main() {
    int baslangic, bitis, sayac = 0;

    
    printf("Baslangic degerini girin: ");
    scanf("%d", &baslangic);
    printf("Bitis degerini girin: ");
    scanf("%d", &bitis);

    
    for (int i = baslangic; i <= bitis; i++) {
        sayac++; 
    }

    
    printf("Aralikta toplam %d sayi var.\n", sayac);

    return 0;
}
/*7.SORU:Kargo Ücreti

Ağırlık ve teslimat tipi al:
Teslimat tipi: standart / hızlı

Ağırlık < 1 kg → 50 TL

1–5 kg → 100 TL

5–20 kg → 250 TL

20 kg üzeri → “Kargo kabul edilmez.”
Eğer hızlı ise tutarın üzerine +30 TL ekle

Algoritma:

1. Başla
2. Ağırlık ve teslimat tipi al
3. Eğer ağırlık < 1 kg ise
    a. Tutar = 50 TL
4. Değilse eğer ağırlık >= 1 kg ve ağırlık <= 5 kg ise
    a. Tutar = 100 TL
5. Değilse eğer ağırlık > 5 kg ve ağırlık <= 20 kg ise
    a. Tutar = 250 TL
6. Değilse eğer ağırlık > 20 kg ise
    a. "Kargo kabul edilmez." mesajını göster ve bitir

7. Tutarı göster
8. Bitir
*/
#include <stdio.h>
#include <string.h>


int main() {
    float agirlik;
    char teslimatTipi[10];
    int tutar = 0;

   
    printf("Kargo ağırlığını kg cinsinden giriniz: ");
    scanf("%f", &agirlik);
  
    if (agirlik < 1) {
        tutar = 50;
    } else if (agirlik >= 1 && agirlik <= 5) {
        tutar = 100;
    } else if (agirlik > 5 && agirlik <= 20) {
        tutar = 250;
    } else {
        printf("Kargo kabul edilmez.\n");
        return 0;
    }



    printf("Kargo ücreti: %d TL\n", tutar);

    return 0;
}
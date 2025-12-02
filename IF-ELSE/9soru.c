/*9.SORU:Alkol Promil Kontrolü

Promil değeri al (0.0–2.0):

0.50 altı → “Serbest”

0.50–1.00 → “Sürücü belgesine 6 ay el koyma”

1.00 üstü → “Sürücü belgesine 2 yıl el koyma”

Algoritma
1. Başla
2. Promil değerini al
3. Eğer promil < 0.50 ise
    “Serbest” yazdır
4. Değilse eğer promil >= 0.50 ve promil <= 1.00 ise
    “Sürücü belgesine 6 ay el koyma” yazdır
5. Değilse
    “Sürücü belgesine 2 yıl el koyma” yazdır
6. Bitir
*/
#include <stdio.h>

int main() {
    float promil;

    
    printf("Promil degerini girin (0.0 - 2.0): ");
    scanf("%f", &promil);

   
    if (promil < 0.50) {
        printf("Serbest\n");
    } else if (promil >= 0.50 && promil <= 1.00) {
        printf("Surucu belgesine 6 ay el koyma\n");
    } else {
        printf("Surucu belgesine 2 yil el koyma\n");
    }

    return 0;
}
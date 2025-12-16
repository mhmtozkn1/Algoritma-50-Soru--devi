#include <stdio.h>

int main() {
    int not1, not2, not3;
    float ortalama;

    // Kullanıcıdan notları al
    printf("1. notu girin: ");
    scanf("%d", &not1);

    printf("2. notu girin: ");
    scanf("%d", &not2);

    printf("3. notu girin: ");
    scanf("%d", &not3);

    // Ortalama hesapla
    ortalama = (not1 + not2 + not3) / 3.0;

    // Sonucu yazdır
    printf("Ortalamaniz: %.2f\n", ortalama);

    // if-else ile geçip geçmediğini kontrol et
    if (ortalama >= 50) {
        printf("Tebrikler, dersten GECTINIZ!\n");
    } else {
        printf("Uzgunum, dersten KALDINIZ.\n");
    }

    return 0;
}
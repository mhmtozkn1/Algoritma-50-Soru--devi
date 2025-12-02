/*3.SORU: Telefon %100 Olana Kadar Şarj Etme

Kullanıcıdan başlangıç batarya yüzdesi al.
While batarya < 100 olduğu sürece her turda %5 arttır.
Batarya 100’e ulaşınca “Şarj tamamlandı.” yaz.

1-BAŞLA
2-Kullanıcıdan başlangıç batarya yüzdesini al (batarya)
3-batarya < 100 olduğu sürece tekrarla
    3.1-batarya = batarya + 5
4-“Şarj tamamlandı.” yaz
5-BİTİR

*/
#include <stdio.h>

int main() {
    int batarya;

   
    printf("Başlangıç batarya yüzdesini girin: ");
    scanf("%d", &batarya);

   
    while (batarya < 100) {
        batarya += 5; // 
        if (batarya > 100) {
            batarya = 100; // 
        }
        printf("Batarya yüzdesi: %d%%\n", batarya);
    }

    printf("Şarj tamamlandı.\n");

    return 0;
}
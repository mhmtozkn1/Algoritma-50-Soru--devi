/*1.SORU:Sayının Faktöriyelini While ile Hesapla

Kullanıcı sayı girsin.
While döngüsüyle faktöriyelini hesapla.

1-BAŞLA
2-Kullanıcıdan bir sayı al (n)
3-faktöriyel = 1
4-sayac = 1
5-While (sayac <= n) yap
    faktöriyel = faktöriyel * sayac
    sayac = sayac + 1
6-Faktöriyel değerini ekrana yazdır
7-BİTİR
*/
#include <stdio.h>

int main() {
    int n, faktoryel = 1, sayac = 1;

    
    printf("Bir sayi girin: ");
    scanf("%d", &n);

    
    while (sayac <= n) {
        faktoryel = faktoryel * sayac;
        sayac = sayac + 1;
    }

    
    printf("%d sayisinin faktoriyeli: %d\n", n, faktoryel);

    return 0;
}
/*1.SORU:Üç Sayının Ortancası

Kullanıcıdan 3 farklı sayı al.
En büyük ya da en küçük değil, tam ortadaki sayıyı ekrana yaz.

ALGORİTMA

1-BAŞLA
2-KULLANICIDAN 3 FARKLI SAYI AL:S1,S2,S3
3-EĞER S1>S2 VE S1<S3 VEYA S1<S2 VE S1>S3 İSE
    S1'İ EKRANA YAZ
4-DEĞİLSE EĞER S2>S1 VE S2<S3 VEYA S2<S1 VE S2>S3 İSE
    S2'Yİ EKRANA YAZ
5-DEĞİLSE
    S3'Ü EKRANA YAZ
6-BİTİR
*/
#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("3 farkli sayi giriniz: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if ((s1 > s2 && s1 < s3) || (s1 < s2 && s1 > s3)) {
        printf("Ortanca sayi: %d\n", s1);
    } else if ((s2 > s1 && s2 < s3) || (s2 < s1 && s2 > s3)) {
        printf("Ortanca sayi: %d\n", s2);
    } else {
        printf("Ortanca sayi: %d\n", s3);
    }

    return 0;
}
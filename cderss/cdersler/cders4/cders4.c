#include <stdio.h>
#include <string.h>
#define SIFRE "atakan"

int main () {
    char girilensifre[10];

    printf("Lütfen şifreyi giriniz:");
    scanf("%s",girilensifre);

    if (strcmp (girilensifre,SIFRE)==0) {
        printf("Giriş Başarılı Hoşgeldiniz.\n");
    } else {
        printf("Sifre Yanlis!Erisim Reddedildi.\n");
    }


    return 0;
}
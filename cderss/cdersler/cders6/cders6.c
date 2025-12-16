#include <stdio.h>
#include <string.h>
#define kullad 459
#define sifre "atakan"

int main () {
    int gkullad ,hak = 0;
    char gsifre[20] ;
    while (hak <6) {
        printf("Kullanıcı adını giriniz:");
        scanf("%d",&gkullad);

        printf("Sifreyi giriniz lütfen:");
        scanf("%s",&gsifre);

        if (kullad==gkullad) {
            if (strcmp(gsifre,sifre)==0) {
                printf("Başarılı giriş!");
            }
            break;
        } else { 
            printf("Yanlış tekrar dene !\n");
            hak++;
        }
    }
    return 0;
}
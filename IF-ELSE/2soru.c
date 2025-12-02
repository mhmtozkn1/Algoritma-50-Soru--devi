/*2.SORU:Basit Parola Kontrolü

Parola: “qwerty123”
Kullanıcı önce kullanıcı adı, ardından parola girsin.

1-BAŞLA
2-KULLANICIDAN KULLANICI ADI AL:KULLANICI_ADI
3-KULLANICIDAN PAROLA AL:PAROLA
4-EĞER PAROLA "qwerty123" İSE
    "Giriş Başarılı" YAZDIR
5-DEĞİLSE
    "Parola Hatalı" YAZDIR
6-BİTİR
*/
#include <stdio.h>
#include <string.h>

int main() {
    char kullanici_adi[50];
    char parola[50];
    const char dogru_parola[] = "qwerty123";
   

    printf("Kullanici adinizi giriniz: ");
    scanf("%s", kullanici_adi);
    printf("Parolanizi giriniz: ");
    scanf("%s", parola);
    if (strcmp(parola, dogru_parola) == 0) {
        printf("Giris Basarili\n");
    } else {
        printf("Kullanıcı adı veya Parola Hatali\n");
    }
    return 0;
}
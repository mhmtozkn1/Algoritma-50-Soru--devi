/*2.SORU:Şifre Doğru Girilene Kadar Denetim

Sabit parola: 12345
Kullanıcı şifreyi doğru girene kadar do-while döngüsü devam etsin.
Doğru girince “Giriş başarılı” yaz.

1-BAŞLA
2-Sabit parolayı belirle (12345)
3-Kullanıcıdan şifre al
4-do
    a-Eğer şifre doğruysa döngüden çık
    b-Kullanıcıya yanlış şifre olduğunu bildir
    c-Kullanıcıdan yeni şifre al
5-while(şifre yanlış)
6-“Giriş başarılı” yazdır
7-BİTİR
*/
#include <stdio.h>
#include <string.h>
#define PAROLA "12345"

int main() {
    char sifre[20];

    printf("Şifreyi giriniz: ");
    scanf("%s", sifre);

    do {
        if (strcmp(sifre, PAROLA) == 0) {
            break; 
        }

        printf("Yanlış şifre, tekrar deneyin: ");
        scanf("%s", sifre);

    } while (1); 

    printf("Giriş başarılı\n");

    return 0;
}
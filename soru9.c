/*Soru – Kullanıcıdan alınan iki string’i (isim–soyisim) birleştirip tek string hâline getiren programı yazın (strcat kullanmadan).

1-BAŞLA
2-KULLANICIDAN isim AL
3-KULLANICIDAN soyisim AL
4-isim UZUNLUĞUNU HESAPLA -> i
5-soyisim UZUNLUĞUNU HESAPLA -> j
6-TEK_STRING UZUNLUĞUNU HESAPLA -> i + j
7-TEK_STRING OLUŞTUR
8-TEK_STRING'e isim EKLE
9-TEK_STRING'e soyisim EKLE
10-TEK_STRING'i YAZDIR
11-BİTİR
*/
#include <stdio.h>
#include <string.h>

int main() {
    char isim[50], soyisim[50], tek_string[100];
    int i, j, k;

    
    printf("Isim girin: ");
    scanf("%s", isim);
    printf("Soyisim girin: ");
    scanf("%s", soyisim);

    
    i = 0;
    while (isim[i] != '\0') {
        i++;
    }

    j = 0;
    while (soyisim[j] != '\0') {
        j++;
    }

    
    for (k = 0; k < i; k++) {
        tek_string[k] = isim[k];
    }

    for (k = 0; k < j; k++) {
        tek_string[i + k] = soyisim[k];
    }


    tek_string[i + j] = '\0';

  
    printf("Birlesik Isim Soyisim: %s\n", tek_string);

    return 0;
}
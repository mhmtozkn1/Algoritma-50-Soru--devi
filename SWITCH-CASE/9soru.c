/*9.SORU:Banka işlemi seçme programı yazınız. 1.Para Yatırma 2.Para Çekme 3.Bakiye Sorgulama 4.Çıkış İşlemi
Başlangıç bakiyesi 1000 TL olsun. Her işlemden sonra kullanıcıya tekrar işlem seçme hakkı verilsin. 4. işlem seçildiğinde program sonlansının.
Algoritma:

1-BAŞLA
2-Kullanıcıdan işlem seçmesini iste
3-Switch-case ile işlemi gerçekleştir
4-Her işlemden sonra tekrar işlem seçme hakkı ver
5-4. işlem seçildiğinde programı sonlandır  
6-BİTİR
*/
#include <stdio.h>

int main () {
    int bakiye = 1000, islem, miktar;
    do {
        printf("Banka Islemleri:\n");
        printf("1. Para Yatirma\n");
        printf("2. Para Cekme\n");
        printf("3. Bakiye Sorgulama\n");
        printf("4. Cikis Islemi\n");
        printf("Islem seciniz (1-4): ");
        scanf("%d", &islem);

        switch(islem) {
            case 1:
                printf("Yatirilacak miktari giriniz: ");
                scanf("%d", &miktar);
                bakiye += miktar;
                printf("%d TL yatirildi. Yeni bakiye: %d TL\n", miktar, bakiye);
                break;
            case 2:
                printf("Cekilecek miktari giriniz: ");
                scanf("%d", &miktar);
                if(miktar > bakiye) {
                    printf("Yetersiz bakiye!\n");
                } else {
                    bakiye -= miktar;
                    printf("%d TL cekildi. Yeni bakiye: %d TL\n", miktar, bakiye);
                }
                break;
            case 3:
                printf("Guncel bakiye: %d TL\n", bakiye);
                break;
            case 4:
                printf("Cikis yapiliyor...\n");
                break;
            default:
                printf("Gecersiz islem secimi!\n");
        }
    } while(islem != 4);
    return 0;
    
}
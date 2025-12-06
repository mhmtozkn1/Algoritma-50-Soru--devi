/*SORU 15:5 elemanlı bir string dizi oluştur.
Kullanıcı her elemana bir isim girsin.
Diziyi gezerken boş bırakılan (“”) yerlere continue ile hiç bakma,
Sadece isim yazılan elemanları ekrana yazdır.

1-BAŞLA
2-STRING DİZİ OLUŞTUR (5 ELEMANLI)
3-DÖNGÜ BAŞLAT (İ=0, İ<5, İ++)
4-EĞER DİZİ[İ] == "" İSE
5-   DEVAM ET
6-EKRANA DİZİ[İ] YAZDIR
7-DÖNGÜ BİTİR
8-BİTİR
*/
#include <stdio.h>
#include <string.h>

int main() {
    char dizi[5][50]; 
     
    
    for(int i = 0; i < 5; i++) {
        printf("Lutfen %d. ismi giriniz (bos birakmak icin sadece ENTER'a basiniz): ", i + 1);
        fgets(dizi[i], sizeof(dizi[i]), stdin);
      
        dizi[i][strcspn(dizi[i], "\n")] = 0;
    }
    
    printf("\nGirilen isimler:\n");
    for(int i = 0; i < 5; i++) {
        if(strcmp(dizi[i], "") == 0) {
            continue;
        }
        printf("%s\n", dizi[i]);
    }
    
    return 0;
}
#include <stdio.h>

#define sayimiz 4

int main () {
    int ts,hak =3 ,bls=0;
    while (hak > 0) {
    
    printf("1'den 10'a kadar olan bir sayi tahmini giriniz:   (%d hakkin kaldi!)\n",hak);
    scanf("%d",&ts);

    if (ts==sayimiz) {
        bls++;
        printf("Doğru tahmin kanka! %d. hakta buldun\n",bls);
        break; 
    } else {
        hak--;
        printf("Yanlış tahmin tekrardan dene!\n",hak);
    }
}

if (hak==0) {
    printf("Oyun bitti gardaş bilemedun!\n");
}

return 0;
}

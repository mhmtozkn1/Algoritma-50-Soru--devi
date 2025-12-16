#include <stdio.h>

int main () {
int c1,t1,t2,tt,yi,c2,cs;
printf("Yapmak istediğiniz işlemi girin (Toplama-1),(Çıkarma-2)\n");
git:
scanf("%d",&yi);
    switch (yi){
        case 1 : {
        printf("Toplama için 2 adet sayı gir:\n");
        scanf("%d\n",&t1);
        scanf("%d",&t2);
        tt=t1+t2;
        printf("Sonuç: %d\n",tt);
    
}
        case 2: {
        printf("Çıkarma için 2 adet sayı girin\n");
        scanf("%d\n",&c1);
        scanf("%d",&c2);
        cs=c1-c2;
        printf("Sonuç : %d",cs);
        break;
}
        default: {
        printf("Geçersiz sayı, lütfen  geçerli bir sayı giriniz!");
        goto git;
}
        }
 
        return 0;
}
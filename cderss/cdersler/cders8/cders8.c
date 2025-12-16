#include <stdio.h>

int main () {
    int note;
    
    printf("Notunuzu giriniz:\n");
    git:
    scanf("%d",&note);
    while (note < 101) {

    if (note > 60) {
   

        printf("Dersten Geçtiniz!");
        break;
    }
    else {

        printf("Dersten KALDINIZ!");
        break;
    } 
}
   if (note > 100) {
 
    printf("Tekrardan Sayı giriniz:\n");
    goto git;
    

   }

    return 0;
}
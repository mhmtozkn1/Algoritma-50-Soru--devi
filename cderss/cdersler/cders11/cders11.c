#include <stdio.h>

int main () {
    int num ;

    printf("Lütfen bir rakam girinz:");
git:
    scanf("%d",&num);

    if (0<=num && num<10) {
        switch(num) {
            case 0:
            printf("Value is 0");
            break;

            case 1 :
            printf("Value is 1");
            break;

            case 2 :
            printf("Value is 2");
            break;

            case 3 :
            printf("Value is 3");
            break;

            case 4:
            printf("Value is 4");
            break;

            case 5:
            printf("Value is 5");
            break;

            case 6:
            printf("Value is 6");
            break;

            case 7:
            printf("Value is 7");
            break;

            case 8:
            printf("Value is ");
            break;

            case 9:
            printf("Doğru girdiniz!");
            break;
            
            default :
            printf("Out of range");
        }
}   else {
    printf("Yanlış girdiniz , lütfen tekrardan giriniz:");
    goto git;
}
return 0;
}
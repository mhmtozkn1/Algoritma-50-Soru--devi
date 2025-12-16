#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    int isPrime = 1;  // Başlangıçta asal kabul edilir

    // Kullanıcıdan sayı alınır
    printf("Bir sayi girin: ");
    scanf("%d", &num);

    // 1 ve daha küçük sayılar asal değildir
    if (num <= 1) {
        isPrime = 0;
    } else {
        // 2'den, sayının kareköküne kadar olan sayılara bölünebilir mi diye kontrol et
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;  // Eğer herhangi bir sayıya bölünüyorsa asal değildir
                break;
            }
        }
    }

    // Sonucu yazdır
    if (isPrime) {
        printf("%d bir asal sayidir.\n", num);
    } else {
        printf("%d bir asal sayi degildir.\n", num);
    }

    return 0;
}

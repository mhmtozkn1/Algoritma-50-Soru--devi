#include <stdio.h>

int main () {
int vize,final;
float dersort;

printf("Vize notunu giriniz:\n");
scanf("%d",&vize);

printf("Final notunu giriniz:\n");
scanf("%d",&final);

dersort=vize*0.444+final*0.6;

if (dersort >90) {
    printf("Ders notunuz AA ve geçtiniz! ort:%f",dersort);
}
else if (dersort >=85 && dersort <90) {
    printf("Dersten notunuz BA ve geçtiniz ort:%f",dersort);
} 
else if (dersort >= 80 && dersort < 85) {
    printf("Ders notunuz BB ve geçtiniz ort:%f",dersort);
} 
else if (dersort >= 75 && dersort < 80) {
    printf("Dersten notunuz CB ve geçtiniz ort:%f",dersort);
} 
else if (dersort < 75 ) {
    printf("Dersten kaldınız!");
}
    
    return 0;
}
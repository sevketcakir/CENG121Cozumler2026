/**
 * Bu uygulamada main fonksiyonu içinde, hipotenus fonksiyonunu
 * çağıran ve sonucu ekrana yazdıran kod ile hipotenus fonksiyonunun
 * gövdesini yazmanız beklenmektedir.
 */

#include<stdio.h>
#include<math.h>

double hipotenus(double a, double b); // prototip

int main() {
    double kenar1, kenar2;
    scanf("%lf%lf", &kenar1, &kenar2);
    double sonuc = hipotenus(kenar1, kenar2); // fonksiyonu çagır ve sonucu sonuc değişkenine ata
    printf("%f\n", sonuc); // sonucu yazdır
    return 0;
}

// hipotenus fonksiyonunun gövdesini yazınız
double hipotenus(double a, double b) {
    return sqrt(a * a + b * b); // hipotenus formulu
}







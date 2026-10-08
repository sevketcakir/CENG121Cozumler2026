/**
 * Kullanıcıdan anapara, oran ve gün sayısını alarak faizi hesaplayan
 * C programını yazınız. Faiz hesaplaması aşağıdaki formülle yapılır:
 *
 * faiz = anapara * oran * gun / 365
 * Örneğin:
 * anapara=1000.00
 * oran=0.1
 * gun=365
 * olduğunda,
 * faiz = 100.00 olur.
 * Faiz yazdırırken virgülden sonra iki basamak yazdırın.
 */
#include<stdio.h>

int main() {
    double anapara, oran; // double değişkenkeri tanımla
    int gun; // tamsayı değişkeni tanımla
    scanf("%lf%lf%d", &anapara, &oran, &gun); // Değerleri kullanıcıdan al
    double faiz = anapara * oran * gun / 365; // Faiz miktarını hesapla
    printf("%.2f\n", faiz); // Faizi yazdır
    return 0;
}







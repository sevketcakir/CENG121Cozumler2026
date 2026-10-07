/**
 * Kullanıcıdan double türünde yarıçap değerini(r) ve
 * tamsayı türünde yükseklik değerini alarak bir
 * silindirin hacmini hesaplayan C programını yazınız.
 * pi sayısı bir değişken olarak aşağıda tanımlanmıştır,
 * hesaplamada kullanabilirsiniz.
 * 
 * Silindirin hacmi pi sayısı, yarıçapın karesi ve
 * yükseklik değerlerinin çarpılması ile elde edilir.
 */ 
#include<stdio.h>

// Alttaki satırı silmeyin, pi sayısını kullanabilirsiniz
double pi = 3.14159265358979323846;

int main() {
    double r; // Yarıçap tanımı
    int h; // yükseklik tanımı
    scanf("%lf%d", &r, &h); // Değerleri al
    double hacim = pi * r * r * h; // Hacim hesapla
    printf("%.2f", hacim); // Hacmi yazdır
    return 0;
}
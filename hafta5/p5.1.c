/**
 * Kullanıcıdan bir ondalıklı sayı(x) ve tamsayı kuvvet değeri(y) 
 * alan ve x^y değerini hesaplayan programı yazınız. Sonucu 
 * yazdırırken virgülden sonra iki basamak yazdırın. Programın 
 * girdi ve çıktı değerlerini sağ kısımdaki sekmeden 
 * inceleyebilirsiniz.
 */ 
#include<stdio.h>

int main() {
    // Değişken tanımlamaları
    double taban, sonuc = 1.0;
    int us;
    scanf("%lf%d", &taban, &us); // Taban ve üs değerini al
    for(int i=0; i<us; i++) { // Üs defa çalışacak döngü
        sonuc *= taban; // Her adımda sonucu taban ile çarp
    }
    printf("%.2f\n", sonuc); // Sonucu yazdır
    return 0;
}
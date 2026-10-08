/**
 * Kullanıcıdan alınacak 15 adet sayıdan kaç tanesinin negatif
 * olduğunu ekrana yazdıran C programını yazın.
 */

#include<stdio.h>

int main() {
    int sayi, negatif = 0, sayac = 0; // Değişkenleri tanımla
    while (sayac < 15) { // 15 adet sayı almak için döngü
        scanf("%d", &sayi); // Kullanıcıdan bir sayıyı al
        if (sayi < 0) { // sayının negatif olup olmadığını kontrol et
            negatif++; // negatif sayacını 1 artır
        }
        sayac++; // sayacı 1 artır
    }
    printf("%d\n", negatif); // negatif sayacını yazdır
    return 0;
}

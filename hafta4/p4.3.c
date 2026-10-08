/**
 * Kullanıcıdan [-100,100] aralığında alınan 10 tane tamsayının en
 * büyüğünü ekrana yazdıran C programını yazınız.
 */
#include<stdio.h>

int main() {
    int sayi, enBuyuk = -100, sayac = 0; // Değişkenleri tanımla
    while (sayac < 10) { // 10 adet sayı almak için döngü
        scanf("%d", &sayi); // Kullanıcıdan bir sayıyı al
        if (sayi > enBuyuk) { // sayının en buyuk olup olmadığını kontrol et
            enBuyuk = sayi; // en buyuk sayiyi guncelle
        }
        sayac++; // sayacı 1 artır
    }
    printf("%d\n", enBuyuk); // en buyuk sayiyi yazdır
    return 0;
}

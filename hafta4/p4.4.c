/**
 * Kullanıcıdan alınacak pozitif tamsayının kendisinden küçük
 * kaç tane tam böleni olduğunu yazdıran C programını yazınız.
 * Örneğin 8 sayısının tam bölen sayısı 3 olacaktır(1,2,4)
 */
#include<stdio.h>

int main() {
    int sayi, sayac = 1, bolen_sayisi = 0; // Değişkenleri tanımla
    scanf("%d", &sayi); // Kullanıcıdan sayıyı al
    while (sayac < sayi) { // sayının bolenlerini bulmak için döngü, sayı dahil değil
        if ( sayi % sayac == 0) { // sayının bolen olup olmadığını kontrol et
            bolen_sayisi++; // bolen sayacını 1 artır
        }
        sayac++; // sayacı 1 artır
    }
    printf("%d\n", bolen_sayisi); // bolen sayacını yazdır
    return 0;
}

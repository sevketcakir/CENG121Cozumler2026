/**
 * Bu uygulamada kullanıcıdan alınan bir tamsayının basamak değerleri
 * ayrık olarak ters sırada ekrana yazdırılmak istenmektedir. Bunun
 * için basamak_yazdir fonksiyonunun gövdesini yazmanız ve main
 * fonksiyonu içinde basamak_yazdir fonksiyonunu uygun parametrelerle
 * çağırarak sonucu ekrana yazdırmanız beklenmektedir.
 * Fonksiyonun örnek çalışması aşağıda verilmiştir:
 * basamak_yazdir(123456) fonksiyonu ekrana "6 5 4 3 2 1 " yazdırmalıdır.
 */

#include<stdio.h>

void basamak_yazdir(int sayi); // prototip

int main() {
    int sayi;
    scanf("%d", &sayi); // Kullanıcıdan sayıyı al
    basamak_yazdir(sayi); // Fonksiyonu çağır, void olduğu için atama yapmıyoruz ya da yazdırmıyoruz
    return 0;
}

// basamak_yazdir fonksiyonunun gövdesini yazınız
void basamak_yazdir(int sayi) {
    while(sayi > 0) { // sayı 0 olana kadar döngü
        printf("%d ", sayi % 10); // sayının son basamağını ekrana yaz
        sayi /= 10; // sayının son basamağını sil
    }
}







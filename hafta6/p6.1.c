/**
 * Bu uygulamada değiştirmeniz gereken iki kısım
 * bulunmaktadır. Birincisi main fonksiyonu içinde
 * mutlak fonksiyonuna çağrı gerçekleştirerek sonucu
 * ekrana yazdıracak kodu yazmanız, ikincisi ise
 * mutlak fonksiyonunun gövdesini yazmanızdır.
 * Ekrana yazdırma için "%f" kullanabilirsiniz.
 */
#include<stdio.h>

double mutlak(double deger);

int main(int argc, char const *argv[])
{
    double sayi; // Sayıyı tanımla
    scanf("%lf", &sayi); // sayıyı al
    double sonuc = mutlak(sayi); // fonksiyonu çağır ve sonucu sonuc değişkenine ata
    printf("%f\n", sonuc); // sonucu yazdır
    return 0;
}

// mutlak fonksiyonunun gövdesini yazınız
double mutlak(double deger) {
    if(deger < 0) //eğer sayı negatif ise
        return -deger; // negatifini döndür
    else
        return deger; // kendisini döndür
}





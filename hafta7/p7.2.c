/**
 * Bu program, kullanıcıdan 20 adet tamsayı alacak ve bu sayılar
 * içinde kaç farklı değer olduğunu hesaplayıp ekrana yazdıracaktır.
 * Girilen sayıların [10,39] aralığında olduğu bilinmektedir.
 *
 * Programın örnek çalışması aşağıda verilmiştir.
 * Girdi: 21 26 38 24 20 16 11 34 32 25 31 15 26 25 32 34 24 38 15 27
 * Çıktı: 13
 *
 * Girdi: 21 23 32 37 30 25 24 14 15 29 31 15 17 16 26 16 19 32 18 35
 * Çıktı: 17
 *
 * İpucu: 7. hafta sunumunun 15. sayfasındaki örnekteki gibi frekanslar
 * hesaplanabilir ve frekans değeri sıfırdan farklı kaç değer var sayılabilir.
 */
#include<stdio.h>

int main() {
    /**
     * [10-39] aralığındaki sayılar için 40 elemanlı frekans dizisi yeterli
     * olacaktır. İlk 10 elemanı kullanmayacağız.
     */
    int frekans[40] = {0}, sayac = 0;
    for(int i=0; i<20; i++) {
        int sayi;
        scanf("%d", &sayi); // Sayıyı al
        frekans[sayi]++; // Sayının frekansını artır
    }
    // Frekansı sıfırdan büyük kaç sayı var
    for(int i=10; i<40; i++) { // 10-39 aralığındaki frekanslar için
        if(frekans[i] > 0) { // frekans 0'dan büyük ise en az 1 defa gelmiştir.
            sayac++;
        }
    }
    printf("%d\n", sayac);
    return 0;
}

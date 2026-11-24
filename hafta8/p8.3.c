/**
 * Bu uygulamada kullanıcıdan alınan uzun bir cümlenin içinde kaç tane kelime
 * olduğunu bulan bir fonksiyon yazmanız beklenmektedir. Kelimeler,
 * beyaz boşluk(' ', '\n', '\t') karakterleri ile ayrılmıştır. Programın
 * örnek çalışması aşağıda verilmiştir:
 *
 * Girdi: "The door" opened slightly; the hand of a man received the 'message'
 * Çıktı: 12
 *
 * Açıklama: noktalama işaretleri ve tırnak işaretleri kelimenin parçasıdır.
 * Kelimeleri birbirinden ayıran tek şey beyaz boşluk karakterleridir.
 *
 * Dikkat: Kelimeler arasında birden fazla boşluk karakteri olabilir.
 * Bu programda işaretçiler (pointers) kullanmanız beklenmektedir. Dizi
 * üzerinde dolaşırken işaretçiler yardımı ile ilerleyiniz.
 */
#include <stdio.h>
int kelime_sayisi(const char *satir);
int main(int argc, char const *argv[])
{
    //main fonksiyonunda değişiklik yapmayınız...
    char satir[4096]; // metni tutacak dizi
    fgets(satir, sizeof(satir), stdin); // standart girdiden metni al
    int toplam_kelime = kelime_sayisi(satir); // kelime sayısını hesapla
    printf("%d\n", toplam_kelime); // kelime sayısını yazdır
    return 0;
}

int kelime_sayisi(const char *satir) {
    const char * mevcut = satir;
    int sayac = 0;
    while(*mevcut != '\0') {
        if(*mevcut == ' ' && *(mevcut+1) != ' ') {
            sayac++;
        }
        mevcut++;
    }
    return sayac + 1;
}

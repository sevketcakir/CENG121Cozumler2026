/**
 * Kullanıcıdan alınan bir tamsayının kendisinden küçük olan
 * tam bölenlerinin sayısı hesaplanmak isteniyor. Bu işlevi
 * gerçekleştirecek olan tam_bolen_sayisi fonksiyonunun
 * gövdesini yazınız ve bu fonksiyonu uygun argümanlarla main
 * içinden çağırınız.
 * Fonksiyonun örnek çalışması aşağıda verilmiştir:
 * tam_bolen_sayisi(6) çağrısı 3 döndürmelidir
 * 6'nın kendisinden küçük tam bölenleri: 1, 2, 3
 */
#include<stdio.h>
int tam_bolen_sayisi(int sayi);

int main() {
    int sayi;
    scanf("%d", &sayi);
    printf("%d\n", tam_bolen_sayisi(sayi));
    return 0;
}

// tam_bolen_sayisi fonksiyonunun gövdesini yazınız
int tam_bolen_sayisi(int sayi) {
    int sayac = 0; // tam bölen sayacı
    for(int i=1; i<=sayi/2; i++) { // sayının yarısı kadar döngü
        if(sayi % i == 0) // i'nin bölen olup olmadığını kontrol et
            sayac++; // sayacı 1 artır
    }
    return sayac; // sayacı döndür
}








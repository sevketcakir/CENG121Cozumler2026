/**
 * Kullanıcıdan alınan sayıya eşit ve küçük kenar
 * uzunluğuna sahip olan kaç adet tam kenar uzunluklı
 * dik üçgen olduğunu hesaplayan dik_ucgen_sayisi
 * fonksiyonunu yazınız ve main fonksiyonu içinden
 * çağırınız. Örnek çalışma:
 * Girilen sayı: 13
 * Çıktı: 3
 * Açıklama: 3-4-5, 6-8-10 ve 5-12-13 üçgenleri(toplam 3 tane)
 */
#include<stdio.h>
int dik_ucgen_sayisi(int sayi);

int main() {
    int sayi;
    scanf("%d", &sayi);
    // dik_ucgen_sayisi fonksiyonunu çağıracak ve sonucu
    // ekrana yazdıracak kodu yazınız
    printf("%d\n", dik_ucgen_sayisi(sayi));
    return 0;
}

// dik_ucgen_sayisi fonksiyonunun gövdesini yazınız
int dik_ucgen_sayisi(int sayi) {
    int sayac = 0;
    for(int i=1; i<=sayi; i++) { // 1'den sayıya kadar döngü
        for(int j=i+1; j<=sayi; j++) { // i+1'den sayıya kadar döngü
            for(int k=j+1; k<=sayi; k++) { // j+1'den sayıya kadar döngü
                if(i*i + j*j == k*k) // i^2 + j^2 == k^2
                    sayac++;
            }
        }
    }
    return sayac;
}

/**
 * Kullanıcıdan bir adet n tamsayısı alan ve bu n değerine göre
 * ekrana a harflerinden oluşan bir piramit şekli çizdiren
 * programı yazınız. Programın örnek çalışması aşağıda verilmiştir:

   Girdi(n): 5
   Çıktı:
       aa
      aaaa
     aaaaaa
    aaaaaaaa
   aaaaaaaaaa
 */
#include<stdio.h>

int main() {
    int sayi; // Bir adet değişken tanımlıyoruz
    scanf("%d", &sayi); // Sayıyı al
    for (int i = 1; i <= sayi; i++) { // Satırlar için döngü
        for (int j = 0; j <= sayi - i - 1; j++) { // Boşluk miktarına göre döngü
            printf(" "); // Boşlukları bas
        }
        for (int j = 1; j <= i; j++) { // a sayısının yarısına göre döngü
            printf("aa"); // her adımda 2 tane a bas
        }
        printf("\n"); // Alt satıra geç
    }
    return 0;
}

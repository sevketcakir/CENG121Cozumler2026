/**
 * Kullanıcıdan bir adet n tamsayısı alan ve bu n değerine göre
 * ekrana a harflerinden oluşan ve sola dayalı bir
 * üçgen şekli çizdiren programı yazınız. Programın örnek
 * çalışması aşağıda verilmiştir:

   Girdi(n): 5
   Çıktı:
   a
   aa
   aaa
   aaaa
   aaaaa
 */
#include<stdio.h>

int main() {
    int sayi; // Bir adet değişken tanımlıyoruz
    scanf("%d", &sayi); // Sayıyı al
    for (int i = 1; i <= sayi; i++) { // Satırlar için döngü
        for (int j = 1; j <= i; j++) { // Satırdaki a'ların sayısına göre döngü
            printf("a");
        }
        printf("\n"); // Alt satıra gec
    }
    return 0;
}

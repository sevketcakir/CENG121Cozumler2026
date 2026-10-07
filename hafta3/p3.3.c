/**
 * Kullanıcıdan alınacak tamsayının tek mi, çift mi olduğunu
 * bulan programı yazınız. Eğer sayı tek ise ekrana "tek",
 * aksi halde "çift" yazdırın.
 */
#include<stdio.h>

int main() {
    int sayi; // alınacak sayı için değişken tanımı
    scanf("%d", &sayi); // Kullanıcıdan sayıyı al
    if (sayi % 2 == 0) { // sayı çift ise
        printf("çift\n"); // "çift" yazdır
    }
    // Henüz else gösterilmediği için 2 ayrı if yazıldı
    if (sayi % 2 == 1) { // sayı tek ise
        printf("tek\n");
    }
}
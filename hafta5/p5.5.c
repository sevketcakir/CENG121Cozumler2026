/**
 * Kullanıcıdan alınacak n tamsayısına göre ekrana nxn
 * boyutunda içi boş, a harflerinden oluşan bir kare
 * çizdiren C programını yazınız. Programın örnek
 * çalışması için kodunuzu boş bir şekilde değerlendirin.
 */
#include<stdio.h>

int main() {
    int sayi; // Bir adet değişken tanımlıyoruz
    scanf("%d", &sayi); // Sayıyı al
    // Üst satırdaki a'ların yazılması
    for (int i = 0; i < sayi; i++)
    {
        printf("a");
    }
    printf("\n");

    // Orta satırdaki a ve boşlukların yazılması
    for (int i = 0; i < sayi - 2; i++) { // Satırlar için döngü
        printf("a");
        for (int j = 0; j < sayi - 2; j++) { // Boşluk miktarına göre döngü
            printf(" ");
        }
        printf("a\n"); // Alt satıra geç
    }

    // Alt satırdaki a'ların yazılması
    for (int i = 0; i < sayi; i++)
    {
        printf("a");
    }
    printf("\n");

    return 0;
}

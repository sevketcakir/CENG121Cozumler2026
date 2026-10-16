/**
 * Kullanıcıdan alınacak n tamsayısına göre ekrana nxn
 * boyutunda içi boş, a harflerinden oluşan bir kare
 * çizdiren C programını yazınız. Programın örnek
 * çalışması için kodunuzu boş bir şekilde değerlendirin.
 */
#include<stdio.h>
/**
 * Bu çözümde çizim alanı bir kare olarak düşünülür ve ekrana boşluk ya da "a"
 * basılacağı bir if koşulu ile belirlenir.
 */

int main() {
    int sayi; // Bir adet değişken tanımlıyoruz
    scanf("%d", &sayi); // Sayıyı al
    for (int i = 0; i < sayi; i++)
    {
        for (int j = 0; j < sayi; j++)
        {
            if (i == 0 || i == sayi - 1 || j == 0 || j == sayi - 1)
            {
                printf("a");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

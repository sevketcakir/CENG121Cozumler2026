/**
 * Kullanıcıdan beş adet tamsayı alacak ve bu sayıların 
 * değerlerine göre yatay eksende çubuk grafik çizdirecek
 * programı yazınız. Her satırda, alınan değer kadar 'a'
 * karakteri basılması gerekmektedir. Programın örnek
 * çalışması aşağıda verilmiştir:
 * 
 * Girdi: 5 3 2 0 7
 * Çıktı:
 * aaaaa
 * aaa
 * aa
 * 
 * aaaaaaa
 */ 
#include<stdio.h>
/**
 * Bu çözüm bir sayı alır ve diğer sayıyı almadan direkt
 * olarak o kadar a basar. Sonra diğer sayı alınır ve basılır.
 * Tüm sayıları başlangıçta almadığı için tercih etmiyoruz,
 * ama doğru bir çözümdür.
 */
int main() {
    int sayi; // Bir adet değişken tanımlıyoruz
    for (int i = 0; i < 5; i++) // 5 satır için döngü
    {
        scanf("%d", &sayi); // Sayıyı al
        for (int j = 0; j < sayi; j++) // sayı kadar a bastır
        {
            printf("a");
        }
        printf("\n"); // Alt satıra geç
        
    }
    return 0;
}
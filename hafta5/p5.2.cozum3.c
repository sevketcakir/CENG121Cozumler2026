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
 * Bu çözüm 5 tane sayı alır ve 5 farklı döngü ile
 * a'ları yazdırır.
 */
int main() {
    int s1, s2, s3, s4, s5; // Değişkenleri tanımla
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5); // Sayıları al
    for(int i=1; i<=s1; i++) { // s1 kadar a bas
        printf("a");
    }
    printf("\n"); // Alt satıra geç
    for(int i=1; i<=s2; i++) { // s2 kadar a bas
        printf("a");
    }
    printf("\n"); // Alt satıra geç
    for(int i=1; i<=s3; i++) { // s3 kadar a bas
        printf("a");
    }
    printf("\n"); // Alt satıra geç
    for(int i=1; i<=s4; i++) { // s4 kadar a bas
        printf("a");
    }
    printf("\n"); // Alt satıra geç
    for(int i=1; i<=s5; i++) { // s5 kadar a bas
        printf("a");
    }
    printf("\n"); // Alt satıra geç

    return 0;
}

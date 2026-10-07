/**
 * Kullanıcıdan alınan 5 basamaklı bir tamsayının basamak
 * değerlerini büyükten küçüğe olacak şekilde alt alta
 * ekrana yazdıran C programını yazınız.
 * Örneğin kullanıcı 12345 girerse ekrandaki çıktı
 * aşağıdaki gibi olacaktır.
 * Çıktı:
 * 1
 * 2
 * 3
 * 4
 * 5
 */ 
 #include<stdio.h>

int main() {
    int birler, onlar, yuzler, binler, onbinler, sayi; // değişken tanımları
    scanf("%d", &sayi); // sayıyı al
    birler    = sayi % 10; // her basamağı ayrı ayrı hesapa
    onlar     = sayi / 10 % 10;
    yuzler    = sayi / 100 % 10;
    binler    = sayi / 1000 % 10;
    onbinler  = sayi / 10000;
    // Ekrana yazdırma
    printf("%d\n%d\n%d\n%d\n%d\n", onbinler, binler, yuzler, onlar, birler);
    return 0;
}
/**
 * Kullanıcıdan alınacak iki adet tamsayıyı toplayan
 * C programını yazınız. Kod bilinçli olarak boş bırakılmıştır.
 * 
 * Lütfen C kodunuzu bu dosyaya yazınız...
 * printf ifadeleri ile ekrana sayı yazdırmayınız, 
 * aksi halde kodunuz düzgün çalışmayacaktır...
 */
 #include<stdio.h>
 
 int main() {
     int s1, s2, toplam; // Değişkenleri tanımla
     scanf("%d%d", &s1, &s2); // Sayıları kullanıcıdan al
     toplam = s1 + s2; // Sayıları topla ve toplam değişkenine yerleştir
     printf("%d\n", toplam); // Toplamı ekrana yazdır
 }
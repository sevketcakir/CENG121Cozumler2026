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
 * Bu uygulamanın birden fazla çözümü vardır. 
 * Bu çözüm önce tüm sayıları alır, sonra iç içe iki
 * döngü ile ne kadar a basılacağını belirler ve 
 * a'ları basar.
 */
int main() {
    int s1, s2, s3, s4, s5; // Değişkenleri tanımla
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5); // Sayıları al
    for(int i=1; i<=5; i++) { // Her satır için döngü
        int a_sayisi; // İlgili satırda kaç tane a basılacak
        if(i == 1) a_sayisi = s1;
        else if(i == 2) a_sayisi = s2;
        else if(i == 3) a_sayisi = s3;
        else if(i == 4) a_sayisi = s4;
        else a_sayisi = s5;
        for(int j=1; j<=a_sayisi; j++){
            printf("a"); // a'ları yazdır
        }
        puts(""); // Alt satıra geç
    }
    return 0;
}
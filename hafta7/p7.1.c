/**
 * Bu program, kullanıcıdan değişken sayıda tamsayı alacak ve
 * bu sayıların eşsiz olup olmadığını kontrol edecektir. Kullanıcı
 * önce kaç adet sayı gireceğini belirtecek, ardından bu sayıları
 * girecektir. Program, girilen sayıların tamamının birbirinden farklı
 * (eşsiz) olup olmadığını kontrol eder. Eğer bütün sayılar eşsizse,
 * ekrana "Eşsiz" yazdırılacak; eğer herhangi bir sayı birden fazla kez
 * girilmişse, ekrana "Tekrarlı" yazdırılacaktır.
 *
 * Programın örnek çalışması aşağıda verilmiştir.
 * Girdi: 7 12 5 7 1 4 6 25
 * Çıktı: Eşsiz
 *
 * Girdi: 9 6 5 8 12 21 5 13 25 20
 * Çıktı: Tekrarlı
 */
#include<stdio.h>

int main() {
    int dizi[30], n, essiz = 1/*true*/;
    scanf("%d", &n); // Adeti al
    for(int i=0; i<n; i++) { // Sayıları diziye al
        scanf("%d", &dizi[i]);
    }
    //Örnek girdi: 6 1 1 2 3 4 5
    // Aynı sayıyı kendisi ile karşılaştırmamak için i ve j aynı değere sahip olmamalı
    for(int i=0;i<n-1 && essiz;i++) { //0 ile n-2 arasında çalışacak döngü, essiz 1(true) ise
        for(int j=i+1;j<n;j++) { // i+1 ile n-1 arasında çalışacak döngü
            if(dizi[i] == dizi[j]) {
                essiz = 0; // false
                break;
            }
        }
    }
    if(essiz) // essiz == 1 ile aynı işleve sahip
        printf("Eşsiz");
    else
        printf("Tekrarlı");
    return 0;
}






/**
 * Bu program, NxN boyutunda bir matrisin sihirli kare olup olmadığını
 * kontrol eder.
 *
 * Sihirli kare, bir matrisin her satır, sütun ve ana çaprazlarının
 * toplamının aynı olduğu özel bir düzenlemedir.
 *
 * Öğrencinin görevi:
 * - `sihirliKare` fonksiyonunu tamamlayarak verilen matrisin sihirli
 * kare olup olmadığını kontrol etmek.
 *
 * Önemli noktalar:
 * - İlk olarak bir sihirli toplam hesaplanmalıdır (örneğin, ilk satır
 *   toplamı).
 * - Daha sonra tüm satır, sütun ve çaprazların toplamlarının bu
 *   değere eşit olup olmadığını kontrol edin.
 * - `sihirliKare` fonksiyonu, sihirli kare ise `1`, değilse `0`
 *   döndürmelidir.
 *
 * Çıktı Örneği:
 * - Kullanıcıdan alınan 3x3 bir sihirli kare için:
 *   Girdi:
 *   3
 *   8 1 6
 *   3 5 7
 *   4 9 2
 *   Çıktı: sihirli kare
 *
 * - Eğer sihirli kare değilse:
 *   Çıktı: sihirli kare değil
 */

#include<stdio.h>

int sihirliKare(int n, int matris[n][n]);

int main() {
    int n; // Matris boyutunu tutacak degisken
    scanf("%d", &n); // Matris boyutunu kullanıcıdan al
    int matris[n][n]; // Matrisi tutacak dizi
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]); // Matrisi kullanıcıdan al
        }
    }
    if(sihirliKare(n, matris)) { // Matris sihirli kare mi
        printf("sihirli kare\n");
    } else { // değilse
        printf("sihirli kare değil\n");
    }
    return 0;
}

int sihirliKare(int n, int matris[n][n]) {
    int toplam = 0, k1toplam=0, k2toplam = 0; // Referans toplam değeri ve köşegenler için değişkenler
    for(int i=0;i<n;i++)
        toplam += matris[i][0]; // ilk sütunu topla
    for(int i=0;i<n;i++) {
        k1toplam += matris[i][i];
        k2toplam += matris[i][n-i-1];
        // Satır ve sütun toplamları için değişkenleri tanımla
        // i'nin her değeri için sıfırlanmasını istediğimizden burada tanımladık
        int satirtoplam = 0, sutuntoplam = 0;
        for(int j=0;j<n;j++) {
            satirtoplam += matris[i][j];
            sutuntoplam += matris[j][i];
        }
        if(satirtoplam != toplam || sutuntoplam != toplam)
            return 0; // false
    }
    if(k1toplam != toplam || k2toplam != toplam)
        return 0; // false

    return 1; // true
}

/**
 * Kullanıcıdan ağırlık(kg cinsinden) ve boy(m cinsinden)
 * alarak vücut kitle indeksini hesaplayan ve bu değere
 * göre kullanıcının vücut kitle indeksini ve hangi
 * ağırlık sınıfında olduğunu yazdıran C programını
 * yazınız. Vücut kitle indeksi ağırlığın boyun karesine
 * bölünmesiyle elde edilir. Örneğin boyu 1.65 m ve
 * ağırlığı 75 kg olan bir kişinin vücut kitle indeksi(vki):
 * 75/(1.65x1.65) = 75/2.72 = 27.5 olacaktır. Ağırlık
 * sınıfları aşağıda verilmiştir
 *
 * vki 18.5'den küçük ise "Zayıf"
 * vki 18.5 ile 25(hariç) arasında ise "Sağlıklı"
 * vki 25 ile 30(hariç) arasında ise "Şişman"
 * vki 30 ile 40(hariç) arasında ise "Obez"
 * vki 40 ve üzerinde "Morbid obez"
 *
 * Bu bilgilere göre ağırlık ve boyu kullanıcıdan alan
 * ve kullanıcının vücut kitle indeksini ve ağırlık
 * sınıfını ekrana yazdıran C programını yazınız.
 */
#include<stdio.h>

int main() {
    double agirlik, boy, vki; // Değişkenleri tanımla
    scanf("%lf%lf", &agirlik, &boy); // Değerleri kullanıcıdan al
    vki = agirlik / (boy * boy); // Vücut kitle indeksini hesapla
    printf("%.2lf\n", vki); // Vkiyi yazdır
    // Sınıfa göre ekrana yaz
    if (vki < 18.5) {
        printf("Zayıf\n");
    } else if (vki < 25) {
        printf("Sağlıklı\n");
    } else if (vki < 30) {
        printf("Şişman\n");
    } else if (vki < 40) {
        printf("Obez\n");
    } else {
        printf("Morbid obez\n");
    }

    return 0;
}

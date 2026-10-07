# CENG 121 - Algoritmalar ve Programlama Laboratuvarı Çözümleri (2026)

Bu depo, **CENG 121 Algoritmalar ve Programlama** dersi laboratuvar uygulamalarının haftalık çözümlerini içermektedir.

---

## 📌 İçindekiler ve Müfredat Yapısı

* **[Hafta 2: Akış Diyagramı Uygulamaları](#-hafta-2-akış-diyagramı-uygulamaları)** *(Görsel Algoritma Tasarımı & JSON Çözümleri)*
* **[Hafta 3: C Programlama Uygulamaları](#-hafta-3-c-programlama-uygulamaları)** *(Eklenecek)*
* **[Hafta 4: C Programlama Uygulamaları](#-hafta-4-c-programlama-uygulamaları)** *(Eklenecek)*

---

## 🚀 Hafta 2: Akış Diyagramı Uygulamaları

Hafta 2 çözümleri, akış diyagramı modelleme ve yorumlama aracı olan **[C Akış Diyagramı Yorumlayıcısı](https://sevketcakir.github.io/AkisDiyagrami/)** platformu için `.json` formatında hazırlanmıştır.

### 🛠️ Çözümler Nasıl Açılır ve Çalıştırılır?
1. Web tarayıcınızdan **[sevketcakir.github.io/AkisDiyagrami/](https://sevketcakir.github.io/AkisDiyagrami/)** adresine gidin.
2. Üst menü çubuğundaki **📁 Yükle** butonuna tıklayın.
3. `hafta2/` klasöründen çalıştırmak istediğiniz `.json` dosyasını seçin.
4. Diyagram yüklendikten sonra:
   * **▶️ Çalıştır / ⏯️ Adım Adım:** Algoritmanın çalışma mantığını ve değişkenlerin bellekteki anlık değerlerini inceleyin.
   * **⚡ C Kodunu Gör:** Akış şemasının C dilindeki eşdeğer kaynak kodunu görüntüleyin.

---

### 📋 Hafta 2 Problem ve Çözüm Detayları

| Dosya | Problem | Açıklama / Algoritma Mantığı |
| :--- | :--- | :--- |
| [`hacim.json`](hafta2/hacim.json) | **Silindir Hacmi Hesabı** | Taban yarıçapı ($r$) ve yükseklik ($h$) alınarak $V = \pi \cdot r^2 \cdot h$ formülüyle hacim hesaplanır. |
| [`tekcift.json`](hafta2/tekcift.json) | **Tek / Çift Sayı Kontrolü** | Girilen sayının 2 ile bölümünden kalan (`sayi % 2 == 0`) kontrol edilerek `Cift` veya `Tek` çıktısı verilir. |
| [`enbuyuk.json`](hafta2/enbuyuk.json) | **5 Sayının En Büyüğü** | 5 sayı ($s_1, s_2, s_3, s_4, s_5$) alınır; ilk sayı en büyük (`eb = s1`) kabul edilip sırayla diğer sayılarla karşılaştırılarak en büyük değer belirlenir. |
| [`vki.json`](hafta2/vki.json) | **Vücut Kitle İndeksi (VKİ)** | Kilo ($kg$) ve boy ($b$) alınır. $VKİ = kg / (b^2)$ formülü hesaplanır; kademeli karar bloklarıyla durum (Zayıf, Sağlıklı, Şişman, Obez, Morbid Obez) belirlenir. |
| [`kok.json`](hafta2/kok.json) | **İkinci Dereceden Denklem Kökleri** | $ax^2 + bx + c = 0$ denkleminde $\Delta = b^2 - 4ac$ diskriminantı hesaplanır. $\Delta < 0$, $\Delta = 0$ ve $\Delta > 0$ durumlarına göre reel kökler bulunur. |

---

### 🔍 Uygulamaların Algoritmik İncelemesi

#### 1. Silindir Hacmi Hesabı (`hacim.json`)
* **Girdiler:** $r$ (yarıçap), $h$ (yükseklik)
* **İşlemler:**
  $$\pi = 3.14159265$$
  $$V = \pi \times r^2 \times h$$
* **Çıktı:** `"Hacim: " + V`

#### 2. Tek / Çift Sayı Tespiti (`tekcift.json`)
* **Girdi:** $sayi$
* **Koşul:** `sayi % 2 == 0`
* **Dallar:**
  * **Doğru (Evet):** `"Cift"`
  * **Yanlış (Hayır):** `"Tek"`

#### 3. Beş Sayı Arasından En Büyüğü (`enbuyuk.json`)
* **Girdi:** $s_1, s_2, s_3, s_4, s_5$
* **Başlangıç:** `eb = s1`
* **Koşul Zinciri:**
  * `s2 > eb` $\rightarrow$ Doğru ise `eb = s2`
  * `s3 > eb` $\rightarrow$ Doğru ise `eb = s3`
  * `s4 > eb` $\rightarrow$ Doğru ise `eb = s4`
  * `s5 > eb` $\rightarrow$ Doğru ise `eb = s5`
* **Çıktı:** `"En Buyuk: " + eb`

#### 4. Vücut Kitle İndeksi (VKİ) Sınıflandırması (`vki.json`)
* **Girdiler:** $kg$ (kilo - kg), $b$ (boy - metre)
* **Hesaplama:** $vki = kg / (b \times b)$
* **Karar Ağacı:**
  * $vki < 18.5 \rightarrow$ `"Zayif"`
  * $vki < 25 \rightarrow$ `"Saglikli"`
  * $vki < 30 \rightarrow$ `"Sisman"`
  * $vki < 40 \rightarrow$ `"Obez"`
  * Diğer $\rightarrow$ `"Morbid Obez"`

#### 5. İkinci Dereceden Denklem Kökleri (`kok.json`)
* **Girdiler:** $a, b, c$ katsayıları
* **Diskriminant:** $\Delta = b^2 - 4ac$
* **Karar Dalları:**
  * $\Delta < 0 \rightarrow$ `"Reel kok yok"`
  * $\Delta == 0 \rightarrow$ Tek kök: $x = \frac{-b}{2a}$
  * $\Delta > 0 \rightarrow$ İki kök: $x_1 = \frac{-b - \sqrt{\Delta}}{2a}$, $x_2 = \frac{-b + \sqrt{\Delta}}{2a}$

---

## 📂 Hafta 3: C Programlama Uygulamaları

*(Bu bölüm çözümler eklendiğinde güncellenecektir.)*

---

## 📂 Hafta 4: C Programlama Uygulamaları

*(Bu bölüm çözümler eklendiğinde güncellenecektir.)*

# CENG 121 - Algoritmalar ve Programlama Laboratuvarı Çözümleri (2026)

Bu depo, **CENG 121 Algoritmalar ve Programlama** dersi laboratuvar uygulamalarının haftalık çözümlerini içermektedir.

---

## 📌 İçindekiler ve Müfredat Yapısı

* **[Hafta 2: Akış Diyagramı Uygulamaları](#-hafta-2-akış-diyagramı-uygulamaları)** *(Görsel Algoritma Tasarımı & JSON Çözümleri)*
* **[Hafta 3: C Programlama Uygulamaları](#-hafta-3-c-programlama-uygulamaları)** *(Temel G/Ç, Değişkenler, Aritmetik Operatörler & Koşul)*
* **[Hafta 4: C Programlama Uygulamaları](#-hafta-4-c-programlama-uygulamaları)** *(Döngüler (while), Sayaç Mantığı, Karar Yapıları & Formül Uygulamaları)*
* **[Hafta 5: C Programlama Uygulamaları](#-hafta-5-c-programlama-uygulamaları)** *(Döngüler (for), İç İçe Döngüler, Üs Alma & Desen/Şekil Çizimi)*
* **[Hafta 6: C Programlama Uygulamaları](#-hafta-6-c-programlama-uygulamaları)** *(Kullanıcı Tanımlı Fonksiyonlar, Prototip Bildirimi, Dönüş Tipleri, `<math.h>` & Özyineleme (Recursion))*
* **[Hafta 7: C Programlama Uygulamaları](#-hafta-7-c-programlama-uygulamaları)** *(Tek ve Çok Boyutlu Diziler, Frekans Analizi, Dairesel Rotasyon & Karakter Dizileri (Strings))*

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

## 💻 Hafta 3: C Programlama Uygulamaları

Hafta 3 laboratuvarında C diline giriş yapılmış; standart giriş/çıkış fonksiyonları (`printf`, `scanf`), kaçış dizileri, temel veri tipleri (`int`, `double`), aritmetik ve modülüs operatörleri ile temel koşul yapıları (`if`) ele alınmıştır.

### 📋 Hafta 3 Problem ve Çözüm Özeti

| Dosya | Problem | Konu & Anahtar Kavramlar |
| :--- | :--- | :--- |
| [`p3.1.c`](hafta3/p3.1.c) | **Merhaba Dünya ve Kaçış Dizileri** | `printf`, satır sonu (`\n`), çift tırnak kaçış dizisi (`\"`) |
| [`p3.2.c`](hafta3/p3.2.c) | **İki Tamsayının Toplamı** | `scanf("%d%d")`, değişken tanımlama, aritmetik toplama (`+`) |
| [`p3.3.c`](hafta3/p3.3.c) | **Tek / Çift Sayı Kontrolü** | Mod operatörü (`%`), ardışık bağımsız `if` blokları (`else` henüz işlenmediği için) |
| [`p3.4.c`](hafta3/p3.4.c) | **5 Basamaklı Sayıyı Ayrıştırma** | Tamsayı bölme (`/`) ve mod (`%`) operatörleriyle basamak çözümleme |
| [`p3.5.c`](hafta3/p3.5.c) | **Silindir Hacmi Hesabı** | `double` ve `int` tipleri, `scanf("%lf%d")`, formatlı ondalıklı yazdırma (`%.2f`) |

---

### 🔍 Kodların Detaylı Analizi

#### 1. Problem 3.1: Merhaba Dünya ve Kaçış Dizileri ([`p3.1.c`](hafta3/p3.1.c))
* **Amaç:** Ekrana 3 satırdan oluşan formatlı metni yazdırmak.
* **Beklenen Çıktı:**
  ```text
  Merhaba Dunya!
  C Programlama Laboratuvarina Hos Geldiniz.
  "CENG 111" - Pamukkale Universitesi
  ```
* **Önemli Noktalar:**
  * Çift tırnak (`"`) C dilinde string değişmezlerini başlatıp bitirdiği için, ekrana tırnak işareti basmak amacıyla `\"` kaçış dizisi (escape sequence) kullanılmıştır.
  * Her satırın sonunda alt satıra geçmek için `\n` karakteri eklenmiştir.

#### 2. Problem 3.2: İki Tamsayının Toplamı ([`p3.2.c`](hafta3/p3.2.c))
* **Amaç:** Kullanıcıdan iki adet tamsayı alıp toplamını ekrana yazdırmak.
* **Önemli Noktalar:**
  * `int s1, s2, toplam;` ile tamsayı türünde değişkenler tanımlanmıştır.
  * `scanf("%d%d", &s1, &s2);` ifadesiyle kullanıcıdan boşluk veya yeni satır ile ayrılmış iki sayı okunmuştur.
  * Otomatik değerlendirme ortamları için ekrana ekstra kılavuz metin basılmadan sadece sonuç (`%d\n`) yazdırılmıştır.

#### 3. Problem 3.3: Tek / Çift Sayı Kontrolü ([`p3.3.c`](hafta3/p3.3.c))
* **Amaç:** Girilen tamsayı çift ise `"çift"`, tek ise `"tek"` yazdırmak.
* **Önemli Noktalar:**
  * Mod operatörü (`%`) kullanılarak sayının 2'ye bölümünden kalan kontrol edilmiştir (`sayi % 2 == 0` ve `sayi % 2 == 1`).
  * Laboratuvar akışında henüz `else` yapısı gösterilmediği için iki adet bağımsız `if` koşulu kullanılmıştır.

#### 4. Problem 3.4: 5 Basamaklı Sayının Basamaklarını Ayrıştırma ([`p3.4.c`](hafta3/p3.4.c))
* **Amaç:** 5 basamaklı bir tamsayının (örn. `12345`) basamak değerlerini büyük basamaktan küçüğe doğru alt alta yazdırmak.
* **Matematiksel Mantık:**
  * **Birler:** `sayi % 10`
  * **Onlar:** `(sayi / 10) % 10`
  * **Yüzler:** `(sayi / 100) % 10`
  * **Binler:** `(sayi / 1000) % 10`
  * **On Binler:** `sayi / 10000`
* Tamsayı bölme işleminde (`int / int`) kesirli kısmın atılması (truncation) özelliğinden faydalanılmıştır.

#### 5. Problem 3.5: Silindir Hacmi Hesabı ([`p3.5.c`](hafta3/p3.5.c))
* **Amaç:** Yarıçapı `r` (ondalıklı - `double`) ve yüksekliği `h` (tamsayı - `int`) verilen silindirin hacmini hesaplamak.
* **Formül:** $Hacim = \pi \cdot r^2 \cdot h$
* **Önemli Noktalar:**
  * `double` türü için `scanf` format belirteci olarak `%lf` (long float) kullanılmıştır.
  * `printf("%.2f", hacim);` ile sonuç virgülden sonra tam 2 basamak olacak şekilde sınırlandırılmıştır.

---

### ⚙️ C Kodlarını Derleme ve Çalıştırma

Terminal üzerinden herhangi bir C kodunu derleyip çalıştırmak için:

```bash
# Örnek: Problem 3.1 için
gcc -Wall hafta3/p3.1.c -o p3.1
./p3.1

# veya Clang ile tek komutta derleme ve çalıştırma:
clang hafta3/p3.2.c -o p3.2 && ./p3.2
```

---

## 🔁 Hafta 4: C Programlama Uygulamaları

Hafta 4 laboratuvarında `while` döngüsü yapısı, döngü içi sayaç ve akümülatör mantığı, çok dallı karar yapıları (`if - else if - else`), kullanıcıdan ardışık veri alma ve matematiksel formüllerin C dilinde modellenmesi ele alınmıştır.

### 📋 Hafta 4 Problem ve Çözüm Özeti

| Dosya | Problem | Konu & Anahtar Kavramlar |
| :--- | :--- | :--- |
| [`p4.1.c`](hafta4/p4.1.c) | **Basit Faiz Hesabı** | Karma veri tipleri (`double`, `int`), aritmetik işlem önceliği, formatlı ondalıklı yazdırma (`%.2f`) |
| [`p4.2.c`](hafta4/p4.2.c) | **15 Sayıdan Negatif Olanların Sayısı** | `while` döngüsü, sayaç mantığı, döngü içi koşul kontrolü (`if (sayi < 0)`) |
| [`p4.3.c`](hafta4/p4.3.c) | **10 Sayının En Büyüğü (Maksimum Bulma)** | `while` döngüsü, aralık başlangıç değeri (`enBuyuk = -100`), dinamik değer güncelleme |
| [`p4.4.c`](hafta4/p4.4.c) | **Kendisinden Küçük Tam Bölenlerin Sayısı** | Sayaç kontrollü döngü, modülüs (`%`) operatörü ile tam bölünebilirlik tespiti |
| [`p4.5.c`](hafta4/p4.5.c) | **Vücut Kitle İndeksi (VKİ) ve Sınıflandırma** | `double` hassasiyeti, kademeli `if - else if - else` karar merdiveni |

---

### 🔍 Kodların Detaylı Analizi

#### 1. Problem 4.1: Basit Faiz Hesabı ([`p4.1.c`](hafta4/p4.1.c))
* **Amaç:** Kullanıcıdan anapara, faiz oranı ve gün sayısını alarak basit faiz getirisini hesaplamak.
* **Matematiksel Formül:**
  $$faiz = \frac{anapara \times oran \times gun}{365}$$
* **Önemli Noktalar:**
  * `anapara` ve `oran` ondalıklı değerler olabileceği için `double`, `gun` ise tamsayı gün değerini temsil ettiği için `int` olarak tanımlanmıştır.
  * `scanf("%lf%lf%d", &anapara, &oran, &gun);` ile tüm girdiler sırayla okunur.
  * Formüldeki pay kısmında `double` türünde değişkenler bulunduğu için, 365 tamsayısına bölündüğünde C dili otomatik tip yükseltmesi (implicit type conversion) yapar ve tamsayı bölme hatası (integer division) oluşmaz.
  * Sonuç, virgülden sonra iki basamak duyarlılıkla (`printf("%.2f\n", faiz);`) ekrana yazdırılır.

#### 2. Problem 4.2: 15 Sayıdan Negatif Olanların Tespiti ([`p4.2.c`](hafta4/p4.2.c))
* **Amaç:** Kullanıcı tarafından girilen 15 adet tamsayıdan kaç tanesinin negatif (`< 0`) olduğunu tespit etmek.
* **Algoritma Mantığı:**
  * `sayac = 0` ve `negatif = 0` değişkenleri ilklendirilir.
  * `while (sayac < 15)` döngüsü ile 15 adet sayı sırayla kullanıcıdan alınır (`scanf("%d", &sayi);`).
  * Her adımda sayının işareti kontrol edilir (`if (sayi < 0)`); sayı sıfırdan küçükse `negatif++` ile sayaç artırılır.
  * Her turda `sayac++` ile döngü sayacı ilerletilir ve döngü sonunda negatif sayıların toplam adedi yazdırılır.

#### 3. Problem 4.3: 10 Tamsayının En Büyüğü ([`p4.3.c`](hafta4/p4.3.c))
* **Amaç:** Kullanıcıdan $[-100, 100]$ aralığında girilen 10 tamsayı içerisinden en büyük olanını bulmak.
* **Algoritma Mantığı:**
  * Girilen sayıların $[-100, 100]$ aralığında olduğu bilindiğinden, `enBuyuk` değişkenine bu aralıktaki en küçük olası değer olan `-100` atanmıştır. Böylece kullanıcıdan gelen ilk değer dahi güvenle karşılaştırılabilir.
  * `while (sayac < 10)` döngüsü içerisinde sayılar tek tek okunur.
  * Eğer okunan sayı mevcut `enBuyuk` değerinden daha büyükse (`if (sayi > enBuyuk)`), `enBuyuk = sayi;` yapılarak en büyük değer güncellenir.
  * 10 sayının okunması tamamlandığında bulunan en büyük değer ekrana basılır.

#### 4. Problem 4.4: Kendisinden Küçük Tam Bölenlerin Sayısı ([`p4.4.c`](hafta4/p4.4.c))
* **Amaç:** Girilen pozitif bir tamsayının kendisi hariç pozitif tam bölenlerinin sayısını bulmak (Örn: $8 \rightarrow 1, 2, 4 \rightarrow 3$ adet).
* **Algoritma Mantığı:**
  * Bölen adayı olarak sayaç `sayac = 1` değerinden başlatılır.
  * "Kendisinden küçük" koşulu nedeniyle döngü `while (sayac < sayi)` şeklinde kurulur (sayının kendisine kadar gider, sayıyı dahil etmez).
  * Modülüs operatörüyle (`sayi % sayac == 0`) tam bölünüp bölünmediği denetlenir; tam bölünüyorsa `bolen_sayisi++` artırılır.
  * Döngü her adımda `sayac++` ile bir sonraki bölen adayına geçer ve sonunda toplam tam bölen adedi yazdırılır.

#### 5. Problem 4.5: Vücut Kitle İndeksi (VKİ) ve Sınıflandırma ([`p4.5.c`](hafta4/p4.5.c))
* **Amaç:** Ağırlık ($kg$) ve boy ($m$) değerlerini alarak VKİ değerini hesaplamak ve elde edilen değere göre ağırlık sınıfını belirlemek.
* **Formül:**
  $$VKİ = \frac{agirlik}{boy^2}$$
* **Sınıflandırma Aralıkları:**
  * $VKİ < 18.5 \rightarrow$ `"Zayıf"`
  * $18.5 \le VKİ < 25 \rightarrow$ `"Sağlıklı"`
  * $25 \le VKİ < 30 \rightarrow$ `"Şişman"`
  * $30 \le VKİ < 40 \rightarrow$ `"Obez"`
  * $VKİ \ge 40 \rightarrow$ `"Morbid obez"`
* **Önemli Noktalar:**
  * VKİ değeri önce iki ondalık basamak hassasiyetle (`printf("%.2lf\n", vki);`) yazdırılır.
  * Ardından `if - else if - else` karar merdiveni kullanılarak sınıf belirlenir. Koşullar artan sırada kontrol edildiği için gereksiz aralık kontrolleri (`&&` operatörü) yapılmadan sade ve verimli bir yapı elde edilmiştir (Örn: `else if (vki < 25)` bloğuna gelindiğinde $vki \ge 18.5$ koşulu zaten sağlanmış durumdadır).

---

### ⚙️ C Kodlarını Derleme ve Çalıştırma

Terminal üzerinden Hafta 4 kodlarını derleyip çalıştırmak için:

```bash
# Örnek: Problem 4.1 için
gcc -Wall hafta4/p4.1.c -o p4.1
./p4.1

# veya tek komutta derleme ve çalıştırma:
gcc -Wall hafta4/p4.5.c -o p4.5 && ./p4.5
```

---

## 📐 Hafta 5: C Programlama Uygulamaları

Hafta 5 laboratuvarında `for` döngüsü, birikimli çarpım (akümülatör) mantığı ile üs alma, iç içe döngüler (nested loops) ve iki boyutlu konsol çıktılarında geometrik desen/şekil çizdirme algoritmaları (çubuk grafik, dik üçgen, piramit, içi boş kare) ele alınmıştır.

### 📋 Hafta 5 Problem ve Çözüm Özeti

| Dosya | Problem | Konu & Anahtar Kavramlar |
| :--- | :--- | :--- |
| [`p5.1.c`](hafta5/p5.1.c) | **Üs Alma Hesabı ($x^y$)** | `for` döngüsü, çarpımsal akümülatör (`sonuc = 1.0`), bileşik atama (`*=`) |
| [`p5.2.cozum1.c`](hafta5/p5.2.cozum1.c) | **Yatay Çubuk Grafik (Çözüm 1)** | Toplu girdi alma, `if - else if` ile satır seçimi, iç içe `for` döngüsü, `puts("")` |
| [`p5.2.cozum2.c`](hafta5/p5.2.cozum2.c) | **Yatay Çubuk Grafik (Çözüm 2)** | Döngü içinde anlık girdi alma (`scanf`) ve iç döngü ile anında yazdırma |
| [`p5.2.cozum3.c`](hafta5/p5.2.cozum3.c) | **Yatay Çubuk Grafik (Çözüm 3)** | Toplu girdi alma ve her sayı için 5 ayrı ardışık `for` döngüsü kullanma |
| [`p5.3.c`](hafta5/p5.3.c) | **Sola Dayalı Dik Üçgen Çizimi** | İç içe `for` döngüleri, dış döngü indeksine (`i`) bağlı iç döngü sınırı (`j <= i`) |
| [`p5.4.c`](hafta5/p5.4.c) | **Piramit Şekli Çizimi** | Hizalama için azalan boşluk döngüsü (`sayi - i`) ve artan karakter döngüsü (`"aa"`) |
| [`p5.5.c`](hafta5/p5.5.c) | **İçi Boş Kare Çizimi ($n \times n$) (Çözüm 1)** | Üst/alt kenar döngüleri ve orta satırlarda kenar + $n-2$ boşluk mantığı |
| [`p5.5.cozum2.c`](hafta5/p5.5.cozum2.c) | **İçi Boş Kare Çizimi ($n \times n$) (Çözüm 2)** | $n \times n$ ızgara döngüsü ve mantıksal VEYA (`\|\|`) ile sınır/çerçeve koşulu kontrolü |

---

### 🔍 Kodların Detaylı Analizi

#### 1. Problem 5.1: Üs Alma Hesabı ([`p5.1.c`](hafta5/p5.1.c))
* **Amaç:** Kullanıcıdan alınan ondalıklı bir taban ($x$) ve tamsayı kuvvet ($y$) değeri için $x^y$ sonucunu `math.h` kütüphanesi kullanmadan döngü ile hesaplamak.
* **Algoritma Mantığı:**
  * Çarpma işleminde etkisiz eleman `1` olduğu için `double sonuc = 1.0;` olarak ilklendirilir (bu sayede üs `0` girildiğinde döngüye girilmez ve doğru sonuç olan `1.00` üretilir).
  * `for (int i = 0; i < us; i++)` döngüsü kuvvet değeri kadar tekrarlanır ve her adımda `sonuc *= taban;` işlemiyle taban kendi kendisiyle çarpılır.
  * Sonuç virgülden sonra iki basamak hassasiyetle (`%.2f\n`) ekrana yazdırılır.

#### 2. Problem 5.2: Yatay Çubuk Grafik Çizimi ([`p5.2.cozum1.c`](hafta5/p5.2.cozum1.c), [`p5.2.cozum2.c`](hafta5/p5.2.cozum2.c), [`p5.2.cozum3.c`](hafta5/p5.2.cozum3.c))
* **Amaç:** Kullanıcıdan alınan 5 adet tamsayı değerine göre, her satırda ilgili sayı adedince `'a'` karakteri basarak yatay çubuk grafik oluşturmak.
* **Örnek Çalışma (`5 3 2 0 7` girdisi için):**
  ```text
  aaaaa
  aaa
  aa

  aaaaaaa
  ```
* **Üç Farklı Yaklaşımın Karşılaştırması:**
  1. **1. Çözüm ([`p5.2.cozum1.c`](hafta5/p5.2.cozum1.c)) — *İç İçe Döngü ve Karar Yapısı*:** Henüz diziler (arrays) işlenmediği için 5 sayı `s1..s5` değişkenlerine tek seferde okunur. Dış döngü 1'den 5'e kadar satırları sayarken, `if - else if` bloğu ile o satırda basılacak adet (`a_sayisi`) seçilir ve iç döngüde o kadar `'a'` basılır. Satır sonu için `puts("");` kullanılmıştır.
  2. **2. Çözüm ([`p5.2.cozum2.c`](hafta5/p5.2.cozum2.c)) — *Tek Değişken ile Anlık Okuma ve Basma*:** Yalnızca tek bir `sayi` değişkeni tanımlanır. Dış döngünün her adımında bir sayı okunur (`scanf("%d", &sayi)`) ve iç döngüyle hemen o satırın `'a'` karakterleri basılır. Etkileşimli kullanımda girdi ve çıktılar birbirine karışabileceği için ilk çözüm kadar tercih edilmese de bellek kullanımı açısından en kısa çözümdür.
  3. **3. Çözüm ([`p5.2.cozum3.c`](hafta5/p5.2.cozum3.c)) — *Ardışık Bağımsız Döngüler*:** Tüm sayılar başta okunur ve iç içe döngü kurmak yerine her değişken (`s1, s2, s3, s4, s5`) için peş peşe 5 ayrı `for` döngüsü çalıştırılır.

#### 3. Problem 5.3: Sola Dayalı Dik Üçgen Çizimi ([`p5.3.c`](hafta5/p5.3.c))
* **Amaç:** Girilen $n$ tamsayısına göre $n$ satırdan oluşan ve her $i$. satırda $i$ adet `'a'` harfi barındıran sola dayalı dik üçgen çizdirmek.
* **Algoritma Mantığı:**
  * Dış döngü (`for (int i = 1; i <= sayi; i++)`) toplam satır sayısını kontrol eder.
  * İç döngü (`for (int j = 1; j <= i; j++)`), üst sınır olarak dış döngünün o anki satır numarası olan `i` değerini alır. Böylece 1. satırda 1, 2. satırda 2, ..., $n$. satırda $n$ adet `'a'` basılır.
  * İç döngü tamamlandığında `printf("\n");` ile bir alt satıra geçilir.

#### 4. Problem 5.4: Piramit Şekli Çizimi ([`p5.4.c`](hafta5/p5.4.c))
* **Amaç:** Girilen $n$ sayısına göre simetrik bir piramit şekli çizdirmek ($n=5$ için 1. satırda 4 boşluk + 2 `'a'`, 2. satırda 3 boşluk + 4 `'a'`, ..., 5. satırda 0 boşluk + 10 `'a'`).
* **Beklenen Çıktı ($n = 5$):**
  ```text
      aa
     aaaa
    aaaaaa
   aaaaaaaa
  aaaaaaaaaa
  ```
* **Algoritma Mantığı:**
  * Dış döngü `i = 1`'den `sayi` değerine kadar satırları ilerletir.
  * **1. İç Döngü (Boşluklar):** Şeklin ortalanması için her $i$. satırın başında $n - i$ adet boşluk (`" "`) bırakılır (`j = 0`'dan `sayi - i - 1`'e kadar). Satır numarası arttıkça boşluk sayısı 1 azalır.
  * **2. İç Döngü (Karakterler):** Her $i$. satırda toplam $2 \times i$ adet `'a'` basılması gerekmektedir. İç döngü `1`'den `i`'ye kadar döndürülüp her adımda çift karakter (`printf("aa");`) basılarak simetrik piramit elde edilir.

#### 5. Problem 5.5: İçi Boş Kare Çizimi ([`p5.5.c`](hafta5/p5.5.c), [`p5.5.cozum2.c`](hafta5/p5.5.cozum2.c))
* **Amaç:** Girilen $n$ tamsayısına göre $n \times n$ boyutunda, yalnızca dış çerçevesi `'a'` harflerinden oluşan içi boş bir kare çizdirmek.
* **İki Farklı Yaklaşımın Karşılaştırması:**
  1. **1. Çözüm ([`p5.5.c`](hafta5/p5.5.c)) — *Bölümlendirilmiş Satır Mantığı*:** Şekil 3 ayrı parçaya bölünerek çizdirilir:
     * **Üst Kenar:** Tek bir `for` döngüsü ile yan yana $n$ adet `'a'` basılır ve alt satıra geçilir.
     * **Orta Satırlar ($n - 2$ satır):** Üst ve alt satırlar hariç tutularak dış döngü $n - 2$ kez çalıştırılır. Her satırın başında sol kenar için bir `'a'`, ardından iç döngü ile $n - 2$ adet boşluk (`" "`), satır sonunda ise sağ kenar ve yeni satır için `"a\n"` yazdırılır.
     * **Alt Kenar:** Üst kenarla aynı şekilde yan yana $n$ adet `'a'` basılarak kare tamamlanır.
  2. **2. Çözüm ([`p5.5.cozum2.c`](hafta5/p5.5.cozum2.c)) — *Koordinat / Izgara ve Sınır Koşulu Kontrolü*:** Çizim alanı $n \times n$ boyutunda iki boyutlu bir matris/ızgara olarak düşünülür (`i` satır, `j` sütun indeksi; `0`'dan `sayi - 1`'e kadar).
     * Her `(i, j)` hücresinde mantıksal VEYA (`||`) operatörü ile hücrenin karenin kenarlarından birinde olup olmadığı kontrol edilir: `if (i == 0 || i == sayi - 1 || j == 0 || j == sayi - 1)`
     * Koşul doğruysa (ilk satır, son satır, ilk sütun veya son sütun) ekrana `"a"`, aksi halde (iç bölge) `" "` (boşluk) basılır. Tek bir iç içe döngü yapısıyla tüm şekli üreten daha genel ve kompakt bir yaklaşımdır.

---

### ⚙️ C Kodlarını Derleme ve Çalıştırma

Terminal üzerinden Hafta 5 kodlarını derleyip çalıştırmak için:

```bash
# Örnek: Problem 5.1 için
gcc -Wall hafta5/p5.1.c -o p5.1
./p5.1

# veya tek komutta derleme ve çalıştırma:
gcc -Wall hafta5/p5.4.c -o p5.4 && ./p5.4
```

---

## 🧩 Hafta 6: C Programlama Uygulamaları

Hafta 6 laboratuvarında modüler programlamanın temeli olan **fonksiyonlar (functions)** konusuna giriş yapılmıştır. Fonksiyon prototipi (bildirimi), fonksiyon gövdesi (tanımı), fonksiyon çağırma mekanizması, değer döndüren (`return`) ve döndürmeyen (`void`) fonksiyon yapıları, parametre aktarımı, `<math.h>` matematik kütüphanesi kullanımı, algoritmaların fonksiyonlar aracılığıyla modüler hale getirilmesi ve **özyinelemeli (rekürsif / recursive)** fonksiyon mantığı ele alınmıştır.

### 📋 Hafta 6 Problem ve Çözüm Özeti

| Dosya | Problem | Konu & Anahtar Kavramlar |
| :--- | :--- | :--- |
| [`p6.1.c`](hafta6/p6.1.c) | **Mutlak Değer Fonksiyonu** | Fonksiyon prototipi, `double` dönüş tipi, parametre aktarımı, koşullu `return` |
| [`p6.2.c`](hafta6/p6.2.c) | **Hipotenüs Hesabı** | `<math.h>` ve `sqrt()` fonksiyonu, Pisagor teoremi, derlemede matematik kütüphanesi bağlama (`-lm`) |
| [`p6.3.c`](hafta6/p6.3.c) | **Basamakları Tersten Ayrık Yazdırma** | Geriye değer döndürmeyen (`void`) fonksiyonlar, yan etki (konsol çıktısı) üreten fonksiyon yapısı, `while` ile basamak çözümleme |
| [`p6.4.c`](hafta6/p6.4.c) | **Tam Bölen Sayısı Fonksiyonu** | Tamsayı döndüren fonksiyon (`int`), sayaç mantığı, döngü optimizasyonu (`sayi / 2`) |
| [`p6.5.c`](hafta6/p6.5.c) | **Pisagor Dik Üçgen Sayısı** | 3 seviyeli iç içe döngü (`i < j < k <= sayi`), tamsayı kenarlı dik üçgen kombinasyonları, modüler fonksiyon tasarımı |
| [`p6.6.c`](hafta6/p6.6.c) | **Özyinelemeli (Rekürsif) Üs Alma** | Rekürsif fonksiyon (`recursion`), temel durum (`base case`), `unsigned long long int` ve `%llu` |

---

### 🔍 Kodların Detaylı Analizi

#### 1. Problem 6.1: Mutlak Değer Fonksiyonu ([`p6.1.c`](hafta6/p6.1.c))
* **Amaç:** Kullanıcıdan alınan ondalıklı (`double`) bir sayının mutlak değerini hesaplayıp döndüren `mutlak` fonksiyonunu yazmak ve `main` içerisinden çağırmak.
* **Fonksiyon İmzası:** `double mutlak(double deger);`
* **Önemli Noktalar:**
  * Fonksiyon prototipi `main` fonksiyonundan önce bildirilerek derleyiciye fonksiyonun dönüş tipi (`double`) ve alacağı parametre tanıtılmıştır.
  * Fonksiyon gövdesinde `if (deger < 0) return -deger; else return deger;` yapısıyla negatif sayılarda işaret terslenmekte, pozitif veya sıfır durumunda sayının kendisi döndürülmektedir.
  * `main` içerisinde `mutlak(sayi)` çağrısının ürettiği sonuç `sonuc` değişkenine atanmış ve `printf("%f\n", sonuc);` ile ekrana yazdırılmıştır.

#### 2. Problem 6.2: Hipotenüs Hesabı ([`p6.2.c`](hafta6/p6.2.c))
* **Amaç:** İki dik kenar uzunluğu ($a, b$) verilen bir dik üçgenin hipotenüs uzunluğunu hesaplayan `hipotenus` fonksiyonunu geliştirmek.
* **Matematiksel Formül:**
  $$c = \sqrt{a^2 + b^2}$$
* **Fonksiyon İmzası:** `double hipotenus(double a, double b);`
* **Önemli Noktalar:**
  * Karekök hesabı için C standart matematik kütüphanesi `<math.h>` dahil edilmiş ve `sqrt()` fonksiyonundan faydalanılmıştır.
  * Fonksiyon gövdesinde doğrudan `return sqrt(a * a + b * b);` ifadesi ile hesaplanan hipotenüs değeri döndürülmektedir.
  * Linux/GCC ortamında `<math.h>` kütüphanesini kullanan kodlar derlenirken `-lm` (link math library) bayrağının eklenmesi gerekmektedir.

#### 3. Problem 6.3: Basamakları Tersten Ayrık Yazdırma ([`p6.3.c`](hafta6/p6.3.c))
* **Amaç:** Girilen bir tamsayının (örn. `123456`) basamaklarını birler basamağından başlayarak aralarında birer boşluk bırakacak şekilde ters sırada ekrana yazdıran (`6 5 4 3 2 1 `) `basamak_yazdir` fonksiyonunu yazmak.
* **Fonksiyon İmzası:** `void basamak_yazdir(int sayi);`
* **Önemli Noktalar:**
  * Fonksiyon ekrana doğrudan çıktı bastığı ve geriye bir değer döndürmesi gerekmediği için dönüş tipi `void` olarak belirlenmiştir. Bu nedenle `main` fonksiyonunda herhangi bir atama yapılmadan yalnızca fonksiyon çağrısı (`basamak_yazdir(sayi);`) gerçekleştirilir.
  * `while (sayi > 0)` döngüsü içerisinde:
    * `sayi % 10` ile sayının son basamağı elde edilip ekrana basılır.
    * `sayi /= 10` tamsayı bölmesi ile son basamak atılarak sayı küçültülür.

#### 4. Problem 6.4: Tam Bölen Sayısı Fonksiyonu ([`p6.4.c`](hafta6/p6.4.c))
* **Amaç:** Girilen pozitif bir tamsayının kendisi hariç pozitif tam bölenlerinin sayısını bulan `tam_bolen_sayisi` fonksiyonunu yazmak (Örn: $6 \rightarrow 1, 2, 3 \rightarrow 3$ adet).
* **Fonksiyon İmzası:** `int tam_bolen_sayisi(int sayi);`
* **Algoritma Mantığı & Optimizasyon:**
  * Bir tamsayının kendisinden küçük en büyük böleni en fazla $\frac{sayi}{2}$ olabilir. Dolayısıyla döngü üst sınırı $sayi - 1$ yerine `sayi / 2` olarak belirlenmiş (`for (int i = 1; i <= sayi / 2; i++)`), böylece döngü adım sayısı yarıya indirilerek optimizasyon sağlanmıştır.
  * Modülüs operatörüyle (`sayi % i == 0`) tam bölünebilirlik test edilir ve bölen durumunda `sayac++` artırılır.
  * Fonksiyon bulunan adedi `return sayac;` ile çağrıldığı yere iletir. `main` içinde sonuç doğrudan `printf("%d\n", tam_bolen_sayisi(sayi));` ifadesiyle yazdırılır.

#### 5. Problem 6.5: Pisagor Dik Üçgen Sayısı ([`p6.5.c`](hafta6/p6.5.c))
* **Amaç:** Kenar uzunlukları tamsayı olan ve hipotenüsü de dahil olmak üzere hiçbir kenarı kullanıcıdan alınan $N$ tamsayısını aşmayan kaç adet dik üçgen ($a^2 + b^2 = c^2$) olduğunu hesaplayan `dik_ucgen_sayisi` fonksiyonunu yazmak.
* **Örnek:** $N = 13$ için 3 adet dik üçgen bulunur: $(3, 4, 5)$, $(6, 8, 10)$ ve $(5, 12, 13)$.
* **Fonksiyon İmzası:** `int dik_ucgen_sayisi(int sayi);`
* **Algoritma Mantığı & Kombinasyon Optimizasyonu:**
  * Dik kenarların yer değiştirmesiyle oluşan mükerrer üçgenleri (örn. $3-4-5$ ile $4-3-5$) engellemek amacıyla kenarlar arasında $i < j < k$ katı sıralaması benimsenmiştir.
  * 3 seviyeli iç içe döngü yapısı kurulmuştur:
    * Dış döngü 1. dik kenar için: `for (int i = 1; i <= sayi; i++)`
    * Orta döngü 2. dik kenar için: `for (int j = i + 1; j <= sayi; j++)` (daima $j > i$)
    * İç döngü hipotenüs için: `for (int k = j + 1; k <= sayi; k++)` (daima $k > j$)
  * En iç döngüde Pisagor eşitliği (`i * i + j * j == k * k`) sağlandığında sayaç artırılır. Bu sayede tüm gereksiz permütasyonlar elenerek sadece geçerli benzersiz kombinasyonlar taranır.

#### 6. Problem 6.6: Özyinelemeli (Rekürsif) Üs Alma ([`p6.6.c`](hafta6/p6.6.c))
* **Amaç:** Kullanıcıdan alınan $[0, 14]$ aralığındaki iki tamsayı ($a, b$) için $a^b$ kuvvetini döngü kullanmadan, özyinelemeli (rekürsif) olarak hesaplayan `us` fonksiyonunu geliştirmek.
* **Matematiksel Model:**
  $$a^b = \begin{cases} 1, & b = 0 \quad (\text{Temel Durum / Base Case}) \\ a \times a^{b-1}, & b > 0 \quad (\text{Özyinelemeli Adım / Recursive Step}) \end{cases}$$
* **Fonksiyon İmzası:** `unsigned long long int us(unsigned long long int a, unsigned long long int b);`
* **Önemli Noktalar:**
  * **Temel Durum (Base Case):** `if (b == 0) return 1;` koşulu ile özyinelemenin durma noktası tanımlanmıştır. Her sayının sıfırıncı kuvveti 1 olduğundan, çağrı zinciri burada sonlanarak geri dönüş başlar.
  * **Özyinelemeli Çağrı (Recursive Call):** `else return a * us(a, b - 1);` satırında fonksiyon, üs değerini bir azaltarak kendisini tekrar çağırır ve yığından (call stack) geri dönerken çarpımları hesaplar.
  * **Büyük Tamsayı Türü:** Üs alma işleminde sonuçlar çok hızlı büyüdüğünden dolayı taşma (overflow) yaşanmaması için 64-bit işaretsiz tamsayı türü `unsigned long long int` ve giriş/çıkış için `%llu` format belirteci kullanılmıştır.

---

### ⚙️ C Kodlarını Derleme ve Çalıştırma

Terminal üzerinden Hafta 6 kodlarını derleyip çalıştırmak için:

```bash
# Örnek: Problem 6.1 için
gcc -Wall hafta6/p6.1.c -o p6.1
./p6.1

# Problem 6.2 için math kütüphanesi (-lm) ile derleme:
gcc -Wall hafta6/p6.2.c -o p6.2 -lm
./p6.2

# Problem 6.6 (özyinelemeli üs alma) için derleme ve çalıştırma:
gcc -Wall hafta6/p6.6.c -o p6.6 && ./p6.6
```

---

## 📊 Hafta 7: C Programlama Uygulamaları

Hafta 7 laboratuvarında veri yapılarının temeli olan **diziler (arrays)**, **çok boyutlu diziler (matrisler)** ve **karakter dizileri (strings)** konuları ele alınmıştır. Tek boyutlu dizilerde gezinme, eleman arama ve eşsizlik tespiti, frekans dizisi (frequency array) yöntemi ile farklı eleman sayısı bulma, değişken boyutlu diziler (VLA), dizilerin fonksiyonlara argüman olarak aktarımı (`int dizi[]`, `const int dizi[]`), dizi elemanlarının dairesel kaydırılması (circular rotation), $N \times N$ iki boyutlu matrislerde satır, sütun ve köşegen toplamlarının doğrulanması (Sihirli Kare) ve `string.h` kütüphanesi (`strlen`) ile palindrom kontrolü incelenmiştir.

### 📋 Hafta 7 Problem ve Çözüm Özeti

| Dosya | Problem | Konu & Anahtar Kavramlar |
| :--- | :--- | :--- |
| [`p7.1.c`](hafta7/p7.1.c) | **Dizi Elemanlarının Eşsizlik Kontrolü** | Tek boyutlu dizi, iç içe karşılaştırma döngüleri (`i` ve `j = i + 1`), erken çıkış (`break`, flag değişkeni) |
| [`p7.2.c`](hafta7/p7.2.c) | **Farklı Değerlerin Sayısı (Frekans Dizisi)** | Frekans / sayma dizisi (`frekans[sayi]++`), sabit aralıklı verilerde doğrudan indisleme, $O(N)$ karmaşıklık |
| [`p7.3.c`](hafta7/p7.3.c) | **Dizide Sağa Dairesel Rotasyon** | Dizilerin fonksiyona aktarımı, `const` parametre, eleman kaydırma algoritması |
| [`p7.4.c`](hafta7/p7.4.c) | **Sihirli Kare (Magic Square) Tespiti** | Çok boyutlu diziler ($N \times N$ matris), satır/sütun toplamları, asal ve yedek köşegen hesabı |
| [`p7.5.c`](hafta7/p7.5.c) | **Palindrom Kelime Sayıcı** | Karakter dizileri (`char[]`), `<string.h>` ve `strlen()`, çift yönlü simetri kontrolü |

---

### 🔍 Kodların Detaylı Analizi

#### 1. Problem 7.1: Dizi Elemanlarının Eşsizlik Kontrolü ([`p7.1.c`](hafta7/p7.1.c))
* **Amaç:** Kullanıcıdan $N$ adet tamsayı alarak bu sayıların tamamının birbirinden farklı (eşsiz) olup olmadığını denetlemek; tüm sayılar farklıysa `"Eşsiz"`, en az bir tekrar varsa `"Tekrarlı"` yazdırmak.
* **Algoritma Mantığı:**
  * Elemanlar `dizi` içerisine okunduktan sonra `essiz = 1` (bayrak / flag) olarak kabul edilir.
  * İki seviyeli iç içe döngü kurulur: Dış döngü `i = 0`'dan `n - 2`'ye, iç döngü `j = i + 1`'den `n - 1`'e kadar ilerler. Bu sayede bir elemanın kendisiyle kıyaslanması önlenir ve her eleman çifti yalnızca bir kez karşılaştırılır.
  * Eğer `dizi[i] == dizi[j]` eşitliği yakalanırsa, `essiz = 0` yapılarak `break` ile iç döngüden çıkılır ve dış döngü de `essiz` bayrağı sayesinde erken sonlanır (short-circuit).
  * Döngü bitiminde `if (essiz)` ile sonuç belirlenir.

#### 2. Problem 7.2: Farklı Değerlerin Sayısı ([`p7.2.c`](hafta7/p7.2.c))
* **Amaç:** Kullanıcıdan $[10, 39]$ aralığında girilen 20 tamsayı içerisinde kaç farklı (benzersiz) değer olduğunu hesaplamak.
* **Algoritma Mantığı (Frekans Dizisi Tekniği):**
  * Sayıların $[10, 39]$ aralığında sınırlı olduğu bilindiğinden, 40 elemanlı sıfırlarla başlatılmış (`int frekans[40] = {0};`) bir frekans dizisi tanımlanmıştır.
  * Kullanıcıdan her sayı okunduğunda, sayının kendi değeri doğrudan dizi indisi olarak kullanılıp ilgili frekans 1 artırılır (`frekans[sayi]++`).
  * Girişler tamamlandıktan sonra $10$'dan $39$'a kadar frekans dizisi taranır; frekansı sıfırdan büyük olan (`frekans[i] > 0`) her değer için sayaç artırılır. Bu yöntem, iç içe döngü kurmadan $O(N)$ zaman karmaşıklığıyla farklı değerleri saymayı sağlar.

#### 3. Problem 7.3: Dizide Sağa Dairesel Rotasyon ([`p7.3.c`](hafta7/p7.3.c))
* **Amaç:** Kullanıcıdan alınan $N$ elemanlı bir dizinin elemanlarını 1 birim sağa dairesel kaydırmak (son eleman en başa geçer, diğer tüm elemanlar bir indis sağa kayar).
* **Modüler Fonksiyon Tasarımı:**
  * `void dizi_al(int dizi[], int sayi);` $\rightarrow$ Diziyi kullanıcıdan okur.
  * `void dizi_yazdir(const int dizi[], int sayi);` $\rightarrow$ Diziyi ekrana basar. Değiştirilmemesi gereken diziler için `const` niteleyicisi kullanılarak güvenli kodlama prensibi uygulanmıştır.
  * `void dairesel_rotasyon(int dizi[], int sayi);` $\rightarrow$ Rotasyon işlemini gerçekleştirir.
* **Kaydırma Algoritması:**
  * Üzerine yazılmadan önce son eleman geçici değişkende saklanır (`int son = dizi[sayi - 1];`).
  * Elemanların ezilmemesi (overwrite olmaması) için döngü sondan başa doğru (`i = sayi - 2`'den `0`'a) işletilir ve her eleman sağındaki göze taşınır (`dizi[i + 1] = dizi[i];`).
  * Son olarak saklanan son eleman ilk göze atanır (`dizi[0] = son;`).

#### 4. Problem 7.4: Sihirli Kare (Magic Square) Tespiti ([`p7.4.c`](hafta7/p7.4.c))
* **Amaç:** Kullanıcıdan alınan $N \times N$ boyutundaki bir tamsayı matrisinin "Sihirli Kare" olup olmadığını belirlemek. (Sihirli kare: Tüm satırların, tüm sütunların ve her iki ana köşegenin elemanları toplamının birbirine eşit olduğu matris).
* **Algoritma Mantığı:**
  * **Referans Toplam:** İlk sütunun (veya satırın) toplamı alınarak referans sihirli toplam (`toplam`) belirlenir.
  * **Asal ve Yedek Köşegenler:**
    * Asal (ana) köşegen toplamı: $\sum matris[i][i]$
    * Yedek (ters) köşegen toplamı: $\sum matris[i][n - 1 - i]$
  * **Satır ve Sütun Doğrulaması:** Her $i$ satırı için satır toplamı (`matris[i][j]`) ve sütun toplamı (`matris[j][i]`) hesaplanır. Herhangi biri referans toplama eşit değilse fonksiyon derhal `0` döndürerek matrisin sihirli kare olmadığını tespit eder.
  * Tüm satır, sütun ve her iki köşegen toplamı referans değere eşitse `1` döndürülür.

#### 5. Problem 7.5: Palindrom Kelime Sayıcı ([`p7.5.c`](hafta7/p7.5.c))
* **Amaç:** Kullanıcıdan alınan $N$ adet kelimeden kaç tanesinin tersten okunuşu ile düz okunuşu aynı (palindrom) olduğunu bulmak (Örn: `"madam"`, `"kayak"`).
* **Fonksiyon İmzası:** `int palindrom(char kelime[]);`
* **Algoritma Mantığı:**
  * `<string.h>` kütüphanesinden `strlen()` fonksiyonu kullanılarak kelimenin uzunluğu ($L$) elde edilir.
  * Döngü kelimenin ortasına kadar (`i < uzunluk / 2`) ilerletilir.
  * Baştan $i$. karakter ile sondan $i$. karakter (`kelime[uzunluk - i - 1]`) karşılaştırılır. Uyuşmazlık görüldüğü anda `return 0;` ile erken çıkış yapılır.
  * Döngü sorunsuz tamamlanırsa kelime palindromdur (`return 1;`). `main` fonksiyonunda her palindrom kelime için sayaç 1 artırılır.

---

### ⚙️ C Kodlarını Derleme ve Çalıştırma

Terminal üzerinden Hafta 7 kodlarını derleyip çalıştırmak için:

```bash
# Örnek: Problem 7.1 için
gcc -Wall hafta7/p7.1.c -o p7.1
./p7.1

# veya tek komutta derleme ve çalıştırma:
gcc -Wall hafta7/p7.4.c -o p7.4 && ./p7.4
```




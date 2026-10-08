# CENG 121 - Algoritmalar ve Programlama Laboratuvarı Çözümleri (2026)

Bu depo, **CENG 121 Algoritmalar ve Programlama** dersi laboratuvar uygulamalarının haftalık çözümlerini içermektedir.

---

## 📌 İçindekiler ve Müfredat Yapısı

* **[Hafta 2: Akış Diyagramı Uygulamaları](#-hafta-2-akış-diyagramı-uygulamaları)** *(Görsel Algoritma Tasarımı & JSON Çözümleri)*
* **[Hafta 3: C Programlama Uygulamaları](#-hafta-3-c-programlama-uygulamaları)** *(Temel G/Ç, Değişkenler, Aritmetik Operatörler & Koşul)*
* **[Hafta 4: C Programlama Uygulamaları](#-hafta-4-c-programlama-uygulamaları)** *(Döngüler (while), Sayaç Mantığı, Karar Yapıları & Formül Uygulamaları)*

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


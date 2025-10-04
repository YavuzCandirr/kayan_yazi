<h1 align="center">💬 Arduino LCD Kaydırmalı Mesaj Projesi</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Uno-blue?logo=arduino" alt="Arduino">
  <img src="https://img.shields.io/badge/Language-C++-brightgreen" alt="Language">
  <img src="https://img.shields.io/badge/Platform-Arduino%20IDE-orange" alt="Platform">
  <img src="https://img.shields.io/badge/License-Open%20Source-success" alt="License">
</p>

<p align="center">
  Bu proje, <b>Arduino</b> ve <b>20x4 LCD ekran</b> kullanılarak kaydırmalı mesaj göstermeyi sağlar.  
  LCD üzerinde istediğiniz mesaj kayarak görünür ve mesajın sonuna kadar kayma efekti devam eder.  
</p>

---

## 🧠 Özellikler
- LCD ekran üzerinde kaydırmalı mesaj gösterir  
- Mesaj uzunluğu LCD karakter sayısından fazla olsa bile kayma efekti ile görünür  
- Mesaj hızını `delay()` ile kolayca ayarlayabilirsiniz  
- Konsol veya bilgisayar gerekmeden Arduino ve LCD ile bağımsız çalışır  

---

## ⚙️ Kullanılan Donanımlar
- 🔸 Arduino Uno  
- 🔸 20x4 I2C LCD Ekran  
- 🔸 Dirençler ve jumper kablolar  

---

## 🔌 Bağlantılar
- LCD SDA → Arduino A4  
- LCD SCL → Arduino A5  
- LCD VCC → 5V  
- LCD GND → GND  

> LCD adresi kodda `0x27` olarak ayarlanmıştır. Farklı LCD kullanıyorsanız adresi değiştirin.  

---

## 🧰 Kullanım
1. Donanım bağlantılarını yukarıdaki tabloya göre yapın  
2. Arduino IDE’de kodu yükleyin  
3. LCD üzerinde mesaj kayarak görünmeye başlayacaktır  
4. `message` değişkeni ile mesaj içeriğini değiştirebilirsiniz  

---

## 🖼️ Devre Görseli
<p align="center">
  <img src="lcd_devre.png" alt="LCD Kaydırmalı Mesaj Devresi" width="500"/>
</p>

> Not: Eğer servo motor veya başka bileşen eklenmediyse, devrede sadece LCD gözükür.  

---

## 📜 Lisans
Bu proje açık kaynaklıdır.  
Dilersen geliştirebilir ve kendi projelerinde kullanabilirsin.  

---

<h3 align="center">👨‍💻 Geliştirici</h3>
<p align="center">
  <b>Yavuz Candır</b>  
  <br>
  <a href="https://github.com/YavuzCandirr" target="_blank">
    <img src="https://img.shields.io/badge/GitHub-YavuzCandirr-black?logo=github" alt="GitHub">
  </a>
</p>

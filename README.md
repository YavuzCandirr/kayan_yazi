# LCD Kaydırmalı Mesaj Projesi

Bu proje, **Arduino** ve **I2C LCD ekran** kullanarak kaydırmalı bir mesaj görüntüleyen basit bir örnektir.

## Donanım Gereksinimleri
- Arduino Uno (veya uyumlu Arduino kartları)
- 20x4 I2C LCD ekran
- Bağlantı kabloları

## Kullanılan Kütüphaneler
- `Wire.h` (Arduino I2C iletişimi için)
- `LiquidCrystal_I2C.h` (I2C LCD kontrolü için)


## Kod Açıklaması
- LCD ekran adresi: `0x27`
- LCD ekran boyutu: 20 karakter x 4 satır
- `setup()` fonksiyonu ekranı başlatır ve ilk mesajı gösterir.
- `loop()` fonksiyonu mesajı kaydırmalı şekilde ekranda gösterir.


## Bağlantı Şeması
- SDA → A4
- SCL → A5
- VCC → 5V
- GND → GND

## Kullanım
1. Arduino IDE’de kodu açın.
2. Kütüphanelerin yüklü olduğundan emin olun.
3. Arduino’ya yükleyin ve LCD ekranın bağlı olduğundan emin olun.
4. Mesaj ekranda kayarak gösterilecektir.

## Lisans
Bu proje **MIT Lisansı** ile lisanslanmıştır.

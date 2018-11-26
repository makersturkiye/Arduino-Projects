/*  Arduino Dersleri 1 - LED Yakıp Sondurme
 *  @author: Makers Turkiye - Hakan KAYA
 *  @date :  28.11.2018 
 *  
 */

int LED = 13; // LED bağlı olduğu pin numarası

void setup() {          // Kurulumlar
  pinMode(LED, OUTPUT); // LED pinini çıkış olarak tanımlama
}


void loop() {           // SONSUZ DÖNGÜ
  digitalWrite(LED, HIGH);  // LED'i yakma
  delay(1000);              // 1 sn bekleme        
  digitalWrite(LED, LOW);   // LED'i söndürme
  delay(1000);              // 1 sn bekleme
}

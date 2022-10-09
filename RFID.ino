
//program
#include <SPI.h>
include <MFRC522.h>
include <Servo.h>
#include <LiquidCrystal_I2C.h>
include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
include <LiquidCrystal_I2C.h>

#define SS_PIN 10 //sspin10mega
#define RST_PIN 9
define LED_G 5 //Pin Led Hijau
define LED_R 4 //Pin Led Merah
#define BUZZER 2 //Pin Buzzer
MFRC522 mfrc522(SS_PIN, RST_PIN);   // deklarasi RFID
Servo myServo; //Nama Servo
LiquidCrystal_I2C lcd(0x3F ,2,1,0,4,5,6,7,3, POSITIVE);
 
void setup() 
{

  //kaki kiri 2
          Dxl.setPosition(ID_16,520,1000);
          Dxl.setPosition(ID_17,430,1000);
          Dxl.setPosition(ID_18,640,1000); 
              //step0
  myServo.write(0);
  myServo.write(0);//SERVO MULAI
  
  delay(5000); //jangka waktu

 delay(2000); //delay 2 detik

  Serial.begin(9600);   //Komunikasi baud rate
  SPI.begin();
  mfrc522.PCD_Init();
  myServo.attach(3); //pemanggilan servo
  pinMode(LED_G, OUTPUT); //konfigurasi LED hijau sebagai output 
  pinMode(LED_R, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER); //buzzer mati
  lcd.begin(16,2); //lcd start
  lcd.setCursor(4,0);
  lcd.print("JAUH");
  lcd.setCursor(5,1);
  lcd.print("CARD");

          Dxl.setPosition(ID_16,460,2000);
          Dxl.setPosition(ID_17,430,1000);
          Dxl.setPosition(ID_18,532,1000); 
            
              Dxl.setPosition(ID_10,460,1000);
              Dxl.setPosition(ID_11,480,1000);
              Dxl.setPosition(ID_12,645,1000);
              //step0
  lcd.print("KARTU");

}
void loop() 
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  if ( ! mfrc522.PICC_ReadCardSerial()) //pembacaan nilai pada kartu RFID
  {
    return;
     //Menampilkan UID TAG Di Serial Monitor
     Serial.print("UID tag :"); //pembacaan tag
     String content= "";

     byte letter;
   for (byte i = 0; i < mfrc522.uid; i++) 

     #byte letter;
   for (byte i = 0; i < mfrc522.uid.size; i++) 

  }
  {
     #Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     #Serial.print(mfrc522.uid.uidByte[i], HEX);
     #content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     #content.concat(String(mfrc522.uid.uidByte[i], HEX));

     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
       delay(300);
    noTone(BUZZER);
    digitalWrite(LED_G, LOW); //kondisi led_g mati
    myServo.write(0);
    delay(5000); //delay 5 second
    myServo.write(70);
     content.concat(String(mfr2.uid.uidByte[i], HEX));


  if (content.substring(1) == "04 16 62 9A EF 2C 80" || content.substring(1) == "7D 8F 63 D3" || content.substring(1) == "04 5C 8C 2A 59 28 80") //Ganti UID TAG DENGAN PUNYA MAS-NYA
  {
    lcd.clear();
    lcd.setCursor(5, 3);
    lcd.print("AKSES");
    lcd.setCursor(4, 1);
    lcd.print("Accepted");
    delay(500); //delay 500 ms
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 2000);
    delay(300); //delay 300 ms

    tone(BUZZER,2000);
    delay(300);
    tone(BUZZER, 300);

    tone(BUZZER, 400);
    delay(300); //delay 300 milisecond

    delay(300);
    noTone(BUZZER);
    digitalWrite(LED_G, LOW);
    myServo.write(0);
    delay(5000); //delay 5 second
    myServo.write(70);
    delay(300);
    noTone(BUZZER);
    digitalWrite(LED_G, LOW);
    myServo.write(0);
    delay(5000); //delay 5 second
    myServo.write(70);
  }
 
 else   {//akses ditolak karena id tidak sesuai
    lcd.clear();
    lcd.setCursor(5, 1);
    lcd.print("AKSES");
    lcd.setCursor(4, 1);
    lcd.print("DI TOLAK");
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 300);
    delay(1000);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
   //kaki kanan 3
          Dxl.setPosition(ID_7,460,1000);
          Dxl.setPosition(ID_8,430,1000);
          Dxl.setPosition(ID_9,650,1000);
          //step0
  }
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("DEKATKAN");
  lcd.setCursor(5,1);
  lcd.print("KARTU");
} 

 Dynamixel Dxl(DXL_BUS_SERIAL1);
    void maju ()
    {
          //step0
          //kaki kanan 1
          Dxl.setPosition(ID_1,460,1000);
          Dxl.setPosition(ID_2,430,1000);
          Dxl.setPosition(ID_3,340,1000);
          //step0

/*KODE NODE GCS PETIK TEH
  WENDA YUSUP
  PT.MAKERINDO PRIMA SOLUSI*/

#include <Arduino.h>

//----------Definisi LED
#define LED 14
//----------Unique & Timing
bool Indikator_ebyte = 0;
unsigned long waktuebyte = 0;
unsigned long awal = millis();
int Secs = 0;

//----------Definisi LoRq EBYTE
HardwareSerial ebyteSerial(2);

/*-----------VOID SETUP*/
void setup()
{
  Serial.begin(115200);    // Gunakan Serial untuk pemantauan
  ebyteSerial.begin(9600); // Gunakan ebyteSerial untuk komunikasi antar perangkat

  pinMode(LED, OUTPUT);
}

/*-----------VOID LOOP*/
void loop()
{
  unsigned sekarang = millis();

  if (sekarang - awal >= 1000)
  {
    awal = sekarang;
    if (ebyteSerial.available())
    {
      String incoming = ebyteSerial.readStringUntil('\n');
    
      if (incoming.startsWith("MPGMBG0823001"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823002"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823003"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823004"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823005"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823006"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823007"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823008"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG0823009"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("MPGMBG08230010"))
      {
        Serial.println(incoming);
      }
      else if (incoming.startsWith("RPGMBG0823001"))
      {
        Serial.println(incoming);
      }
      digitalWrite(LED, HIGH);
      delay(200);
      digitalWrite(LED, LOW);
    }
    else
    {
      // Serial.println("nan");
      digitalWrite(LED, LOW);
    }
  }

  //   digitalWrite(LED, HIGH);
  //   delay(500);
  //   digitalWrite(LED, LOW);
  // }

  // else
  // {
  //   // Serial.println("...");
  //   digitalWrite(LED, LOW);
  // }
  // }
}
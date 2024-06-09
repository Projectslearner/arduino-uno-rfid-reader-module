/*
    Project name : RFID Card Reader Module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-rfid-reader-module
*/

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN     9          // Define the reset pin
#define SS_PIN      10         // Define the SS pin

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance

// Define valid UIDs here
byte validUID[4] = {0x12, 0x34, 0x56, 0x78}; // Example valid UID

void setup() 
{
  Serial.begin(9600);         // Initialize serial communication
  SPI.begin();                // Init SPI bus
  mfrc522.PCD_Init();         // Init MFRC522
  Serial.println("RFID Reader Module Initialized");
}

void loop()
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }

  // Check if the UID matches the valid UID
  bool isValid = true;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
    if (mfrc522.uid.uidByte[i] != validUID[i]) 
    {
      isValid = false;
      break;
    }
  }

  // Print whether the card is valid or not valid
  if (isValid)
  {
    Serial.println("Valid Card Detected");
  } 
  else
  {
    Serial.println("Invalid Card Detected");
  }
  
  // Dump the card data to serial
  Serial.print("Card UID: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();
  delay(1000);
}

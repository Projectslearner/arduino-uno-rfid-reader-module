# RFID Card Reader Module with Arduino

#### Project Overview

This project demonstrates the use of an RFID card reader module with an Arduino board to read RFID tags/cards. It validates the UID (Unique Identifier) of the detected RFID card against a predefined valid UID, providing feedback via the Serial Monitor regarding the card's validity.

#### Components Needed

1. **Arduino Board**
2. **MFRC522 RFID Card Reader Module**
3. **RFID Cards/Tags**
4. **Jumper Wires**

### Block Diagram



#### Pin Connections

- **MFRC522 RFID Card Reader Module:**
  - **RST (Reset) Pin**: Connect to Arduino digital pin 9
  - **SS (Slave Select) Pin**: Connect to Arduino digital pin 10
  - **MOSI, MISO, SCK**: Connect to respective SPI pins on the Arduino
  - **3.3V, GND**: Connect to the respective power and ground pins on the Arduino

#### Instructions

1. **Set Up the Circuit:**
   - Connect the MFRC522 RFID card reader module to the Arduino board using jumper wires as per the defined pin connections.
   - Ensure the RFID reader module is powered correctly and properly grounded.

2. **Initialize the System:**
   - Initialize serial communication with a baud rate of 9600.
   - Begin SPI communication.
   - Initialize the MFRC522 RFID card reader module.

3. **Read RFID Cards:**
   - Continuously check for the presence of new RFID cards.
   - If a new card is detected, attempt to read its serial number (UID).

4. **Validate UID:**
   - Compare the UID of the detected card with a predefined valid UID.
   - Determine whether the card is valid or invalid based on this comparison.

5. **Output Results:**
   - Display the validation status of the detected card (valid or invalid) on the Serial Monitor.
   - Print the UID of the detected card to the Serial Monitor.

#### Applications

- **Access Control Systems:** Use RFID cards for access control in buildings, offices, or secure areas.
- **Inventory Management:** Track inventory items using RFID tags/cards for efficient management.
- **Identification Systems:** Implement RFID-based identification systems for personnel or assets.

#### Notes

- Ensure that the valid UID stored in the code matches the UID of the RFID cards/tags used in the system.
- Customize the project to include additional functionality, such as triggering actions based on valid card detection.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner
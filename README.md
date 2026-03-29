# 🚗 Arduino RC Car (Bluetooth)

Un projet Arduino pour contrôler une voiture via Bluetooth (HC-05).

---

## 📌 Fonctionnalités

- Contrôle sans fil via Bluetooth  
- Avancer, reculer, gauche, droite, stop  
- Contrôle de 2 moteurs DC  
- Vitesse réglable  

---

## 🧰 Matériel

- Arduino (Uno / Mega)  
- Module Bluetooth HC-05  
- Driver moteur (L298N ou compatible)  
- 2 moteurs DC  
- Batterie  
- Câbles  

---

## 🔌 Connexions

### HC-05 → Arduino

- VCC → 5V  
- GND → GND  
- TX → Pin 10  
- RX → Pin 11 (avec diviseur de tension ⚠️)  

---

## 📲 Commandes

| Lettre | Action |
|--------|--------|
| F | Avancer |
| B | Reculer |
| L | Gauche |
| R | Droite |
| S | Stop |

---

## ⚙️ Installation

1. Installer Arduino IDE  
2. Ajouter la librairie `MotorDriver`  
3. Upload le code  
4. Connecter le HC-05 (code : 1234 ou 0000)  
5. Utiliser une app Bluetooth  

---

## 🧠 Fonctionnement

Téléphone → Bluetooth → Arduino → Moteurs  

---

## 🚀 Améliorations

- Joystick mobile  
- Capteur ultrason  
- Caméra  
- WiFi  

---

## ⚠️ Important

- Ne pas envoyer 12V au HC-05  
- Utiliser un diviseur de tension  

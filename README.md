# Teachable Machine con Python y Arduino 🤖📷

Este proyecto utiliza un modelo de aprendizaje automático entrenado en [Teachable Machine](https://teachablemachine.withgoogle.com/) para reconocer gestos o imágenes mediante la cámara de tu computadora. El resultado se envía por **puerto serial** a un Arduino para controlar salidas (como LEDs).

---

## 🧠 Modelo

El modelo fue entrenado con Teachable Machine y exportado en formato **Keras (`.h5`)**.  
🔗 Puedes ver el modelo en línea aquí:  
[https://teachablemachine.withgoogle.com/models/rsKXMqJcX/](https://teachablemachine.withgoogle.com/models/rsKXMqJcX/)

- Puedes crear tu propio modelo en Teachable Machine y ponerlo en la capeta keras.
---


        
---

## ⚙️ Requisitos

- Python 3.10 o superior
- OpenCV
- TensorFlow
- NumPy
- Comunicación serial (`pyserial`)


Instala las dependencias con:

```bash
pip install -r requirements.txt
```
---
## Diagrama Arduino
<img width="879" alt="Screenshot 2025-05-29 at 11 30 16 a m" src="https://github.com/user-attachments/assets/2a7bcfe7-e8bc-4855-9e23-302727644afa" />

---
## Uso
	1.	Conecta tu Arduino a la computadora vía USB.
	2.	Asegúrate de modificar que el puerto serial en el código sea el correcto (/dev/cu.usbmodemXXXX en Mac o COMX en Windows).
 	3.	Carga el codigo /arduino/arduinoIA.ino a tu placa.
	4.	Ejecuta el script principal:

```bash

python TeachableMachineArduino.py
```
---
---
##Deno


https://github.com/user-attachments/assets/365d0275-b33c-4a97-9451-8f13d3fc33df



---

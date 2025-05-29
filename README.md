# Teachable Machine con Python y Arduino 🤖📷

Este proyecto utiliza un modelo de aprendizaje automático entrenado en [Teachable Machine](https://teachablemachine.withgoogle.com/) para reconocer gestos o imágenes mediante la cámara de tu computadora. El resultado se envía por **puerto serial** a un Arduino para controlar salidas (como LEDs).

---

## 🧠 Modelo

El modelo fue entrenado con Teachable Machine y exportado en formato **Keras (`.h5`)**.  
🔗 Puedes ver el modelo en línea aquí:  
[https://teachablemachine.withgoogle.com/models/rsKXMqJcX/](https://teachablemachine.withgoogle.com/models/rsKXMqJcX/)

- Puedes crear tu propio modelo en Teachable Machine y ponlo del de la capeta keras como se muestra en la estructura:
---

## 📁 Estructura del proyecto



keras_arduino/
├── keras/
│   ├── keras_model.h5      # Modelo entrenado
│   ├── labels.txt          # Etiquetas del modelo
├── TeachableMachineArduino.py  # Código Python principal
├── requirements.txt        # Dependencias del proyecto
└── .gitignore              # Archivos ignorados por Git

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

## Uso
	1.	Conecta tu Arduino a la computadora vía USB.
	2.	Asegúrate de que el puerto serial en el código sea el correcto (/dev/cu.usbmodemXXXX en Mac o COMX en Windows).
	3.	Ejecuta el script principal:

```bash

python TeachableMachineArduino.py
```

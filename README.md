
<<<<<<< HEAD
=======
ESP32 features 10 capacitive touch GPIOs (pins: 2, 4, 12, 13, 14, 15, 27, 32, 33). These pins can act as touch sensors when connected to a wire. Touching the free end of the wire triggers the sensing effect.

This document provides:

- A simple code example to visualize the touch sensing effect.

- An example that uses this feature to control a LED, lighting it up or turning it off based on touch input.

ESP32 uses the electrical properties of the human body as input. When the touch-sensing pin is touched with a finger, a small electric charge is drawn to the point of contact.

This triggers capacitance variation resulting in an analog signal. Two successive approximation ADCs (SAR ADCs) then convert this analog signal into a digital number.
>>>>>>> 848d7520b5c7c1159babed21c62f883f7101d0cb

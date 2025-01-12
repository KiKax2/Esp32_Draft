ESP32 features 10 capacitive touch GPIOs (pins: 2, 4, 12, 13, 14, 15, 27, 32, 33 (only 9 are broken out to the pin headers)). These pins can act as touch sensors when connected to a wire. Touching the free end of the wire triggers the sensing effect. We can use these GPIOs to create light switches, musical instruments, or custom interactive surfaces.

This repo contains: (For now)

- A simple code example to visualize the touch sensing effect.

- An example that uses this feature to control a LED, lighting it up or turning it off based on touch input.

ESP32 uses the electrical properties of the human body as input. When the touch-sensing pin is touched with a finger, a small electric charge is drawn to the point of contact.

This triggers capacitance variation resulting in an analog signal. Two successive approximation ADCs (SAR ADCs) then convert this analog signal into a digital number.



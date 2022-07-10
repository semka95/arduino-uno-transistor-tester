## Arduino Uno Transistor Tester

This project is inspired by [ArduTester V1.13: The Arduino UNO Transistor Tester](https://www.hackster.io/plouc68000/ardutester-v1-13-the-arduino-uno-transistor-tester-dbafb4), in fact, hardware is the same and schematic is almost identical.

### Why?

I assembled tester using instruction from original project[^1], flashed firmware that author attached, but tester did not work very well. Measured capacity was pretty accurate, but ESR does not seem to be ok. ESR was 0 Ohms on all capacitors above ~100 uf, and 20-40 Ohms on all capacitors below 100 uf. Tester stuck when I measured inductors and resistors. It reboots itself when measuring diodes. So I configured latest firmware by Markus Reschke, flashed it and all glitches mentioned above are gone.

### Hardware:

- Arduino Uno R3
- 1602 LCD (HD44780)
- Push button
- Resistors:
  - 1k Ohm x1
  - 10k Ohm x1
  - 470K Ohm x3
  - 680 Ohm x3

### Firmware

I took **Markus Reschke firmware version 1.45m**[^2] and configured `config.h`, `config_328.h` and `Makefile`.

Enabled functions:

- PWM generator
- Inductance measurement
- ESR measurement
- check for optocouplers
- check for Unijunction Transistor
- check for Schottky Transistor (Schottky-clamped BJT)

Feel free to configure firmware, all instructions are available in original README and in configuration files.

### Diagram

The only difference in schematic I made is I moved button from A3 pin to D1, because in documentation it says: `"can't be same port as ADC_PORT or R_PORT"`, so I moved button to `PORTD`[^3].
![diagram](/resources/board.png)

### Scheme

![scheme](/resources/scheme.png)

### Links

[^1]: [ArduTester V1.13: The Arduino UNO Transistor Tester](https://www.hackster.io/plouc68000/ardutester-v1-13-the-arduino-uno-transistor-tester-dbafb4)
[^2]: [Firmware by Markus Reschke version 1.45m](https://github.com/Mikrocontroller-net/transistortester/blob/master/Software/Markus/ComponentTester-1.45m.tgz)
[^3]: [Arduino Uno Pinout Diagram](https://images.prismic.io/circuito/8e3a980f0f964cc539b4cbbba2654bb660db6f52_arduino-uno-pinout-diagram.png?auto=compress,format)

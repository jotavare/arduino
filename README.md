## ABOUT

This repository documents my journey into embedded systems, starting with `Arduino`. Each exercise in the `/sketches` folder features a schematic, a real-world photo and video of the setup made by me. The `README.md` includes references and key information I've learned throughout these projects. The kit I used (ELEGOO Mega R3 2560) is available to buy [here](https://www.amazon.es/dp/B01MQPT9OD).

## SKETCHES

| Sketche | Image | Video |
| :------ | :---- | :---- |
| [Blink](https://github.com/jotavare/arduino/tree/main/sketches/blink.ino) | [Image](#) | [Video](#) |
| [LED](#)  | [Image](#) | [Video](#) |
| [RGB LED](#)  | [Image](#) | [Video](#) |
| [Digital Inputs](#)  | [Image](#) | [Video](#) |
| [Active Buzzer](#)  | [Image](#) | [Video](#) |
| [Passive Buzzer](#)  | [Image](#) | [Video](#) |
| [Till Ball Switch](#)  | [Image](#) | [Video](#) |
| [Servo](#)  | [Image](#) | [Video](#) |
| [Ultrasonic Sensor](#)  | [Image](#) | [Video](#) |
| [Temperature and Humidity Sensor](#)  | [Image](#) | [Video](#) |
| [Analog Joystick](#)  | [Image](#) | [Video](#) |
| [IR Receiver](#)  | [Image](#) | [Video](#) |
| [LCD Display](#)  | [Image](#) | [Video](#) |
| [Thermometer](#)  | [Image](#) | [Video](#) |

## REFERENCES

- [Arduino Hardware](https://www.arduino.cc/en/Main/Products)
- [Arduino Project Hub](https://projecthub.arduino.cc)
- [Elegoo Tutorial Documentation](https://www.elegoo.com/pages/download)
- [Resistor Values](https://www.wellpcb.com/wp-content/uploads/2021/07/3-7.jpg)
- [Fun with Transistors](https://youtu.be/5vRAACeebjI?si=wI3KawgyUAZHIRBX)
- [Capacitors Explained](https://youtu.be/X4EUwTwZ110?si=RXoiA3ccF3Y3uuVp)
- [Arduino MASTERCLASS](https://youtu.be/BLrHTHUjPuw?si=VHcc6iPXdS2iM1xB)
- [How to Read a Schematic](https://youtu.be/_HZ-EQ8Hc8E?si=vpJTUPBT0pUJ5Q9J)
- [How to Read Schematics - Part 1](https://youtu.be/4B6feSKfLxo?si=zs6Z2ZmyRPAylcnB)
- [How to Read Schematics - Part 2](https://www.youtube.com/watch?v=UT7B3o9fxcE)
- [Schematic Symbols](https://www.electronics-tutorials.ws/resources/basic-schematic-symbols.html)

## BASICS

### Key Concepts

1. **Electrical Signals**:
    - **AC (Alternating Current)**: Electricity flows back and forth.
    - **DC (Direct Current)**: Electricity flows in one direction.

1. **Voltage and Current**:
    - Voltage is the force that makes electrons flow. It's a difference in potential energy between two different points in a circuit.
    - Current is the rate of the flow of electrons. It's measured in amperes, which are also called amps.

    <br>

    > In AC circuits, the voltage can be calculated using Ohm's law:
    > - `V = I x R`.
    > - `V` is the voltage (in volts, V)
    > - `I` is the current (in amperes, A)
    > - `R` is the resistance (in ohms, Ω)

2. **Circuit Basics**:
    - **Closed Circuit**: Allows current to flow from power to ground.
    - **Open Circuit**: Interrupts the flow of electricity.

3. **Series vs. Parallel Circuits**:
    - **Series**: Same current flows through all components.
    - **Parallel**: Same voltage across all components.

4. **Resistors**:
    - Add resistance to the circuit, reducing current flow.
    - Measured in Ohms (Ω).

5. **Capacitors**:
    - Store and discharge electricity to maintain a steady current.
    - Measured in Farads (F).

6. **Diodes**:
    - Allow current to flow in only one direction.
    - LEDs are a special type of diode that emits light.

7. **Transistors**:
    - Amplify electrical signals.
    - Two main types: NPN and PNP.

8. **Integrated Circuits (ICs)**:
    - Miniaturized circuits with multiple components.
    - Common IC: 555 timer.

9. **Potentiometers**:
    - Variable resistors that adjust resistance in a circuit.
    - Commonly used in volume controls.

10. **Switches**:
    - Mechanical devices that open or close circuits.

11. **Batteries**:
    - Convert chemical energy into electrical energy.
    - Can be connected in series to increase voltage or in parallel to increase current.

12. **Breadboards**:
    - Prototyping boards used for building circuits without soldering.
    - Contains rows and columns of electrically connected holes for components.

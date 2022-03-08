# Automatic Water Pumping System with Overflow Control

## Table of Contents

1. Abstract
2. Description
3. SWOT analysis
4. 5W's and 1H
5. Block diagram
6. High level requirements
7. Low level requirements
8. Component details
9. Application

## Abstract

* In our daily life we observe lots of wastage of natural resource such as water, one of the major area where the wastage of
  water is seen is overhead tanks at our homes. Whenever the water in the tank gets empty we switch on the water pump to fillup
  the tank. Once the water in the tank fills up, it starts to overflow without any indication to us. In addition, we need to
  manually switch on/off the water pump in a timely manner. So in order to prevent the overflow of the tank and make the whole
  process of pumping up the water automated an Automatic Water Pumping System with Overflow Control and Water Level Indicator can be
  a great solution.
  
## Description

* This automated system has two water level sensor which is to be attached at top x1 and bottom x1 surface of the water tank
  which detects the water level in the tank and switches on/off the water pump and also displays the water level. The water level
  sensor in this prototype project is replaced with two on/off switches. To read the water level of the overhead water tank there
  are two reed sensors, one for low level (L) and the other for high level (H). A magnetic float switch that activates two reed
  sensors so that the magnetic float travels from low level (L) to high level (H) and vice-versa according to water level in the
  water tank. If the L reed sensor triggers its microcontroller input, the water pump is activated with indicator LED on. When H
  level is reached, ie the H reed sensor triggers its microcontroller input, water pump is deactivated with indicator LED off.
  Water pump is reactivated only when water drops back to L level.

![Screenshot (256)](https://user-images.githubusercontent.com/42509490/156889253-3e715b80-4885-4445-9ca1-6a24c87a6dd9.png)

## Identifyng features

* It must detect the water-level and display the water-level.
* It must detect the low water-level and start the water-pump imediatly with an indication.
* It must detect the high water-level and stop the water-pump imediatly with an indication.

## SWOT analysis

![Screenshot (225)](https://user-images.githubusercontent.com/42509490/155770217-7c11c6d5-c1c7-49fe-ad25-791606eb5779.png)

## 5W's and 1H

![Screenshot (240)](https://user-images.githubusercontent.com/42509490/155858191-b89f6357-613b-4db8-957b-4efd400caaf6.png)

## Block Diagram

![Screenshot (236)](https://user-images.githubusercontent.com/42509490/155855134-4c4f418f-2a9a-485b-ab00-3ab6d33b640e.png)

## High Level Requirements

| Test-ID | Description  |
|----|-----------------------------------------------------------------|
|HLR1| Display the water-level present in the tank |
|HLR2| Switch on the water-pump when water-level is low in the tank |
|HLR3| Switch off the water-pump when water is fully filled in the tank |

## Low Level Requirements

| Test-ID | Description  | HLR-ID
|----|----------------------------------------------------------|-------|
|LLR1| Display the water-level in terms of liters |HLR1|
|LLR2| Display the water-level based on sensor's input |HLR1|
|LLR3| Switch on the water-pump when both the water-level sensors are open |HLR2|
|LLR4| Switch on the water-pump when bottom sensor is closed and top sensors is open |HLR2|
|LLR5| Switch off the water-pump when both the water-level sensors are closed |HLR3|
|LLR6| Switch off the water-pump when bottom sensor is open and top sensor is closed |HLR3|

## Component Detailes

| Components Used | Working As |     Component Discription             | Quantity  |
|------------|-------------------|-------------------------------------|------------|
| Atmega328 microcontroller | Microprocessor| ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family which has a modified harvard architecture 8-bit RISC processor core. Atmega328 has 28 pins in total which is divided into 3 Ports in total which are named as Port B, Port C and Port D. It has EPROM and clock built internally. |   x1       |
| 16x2 LCD | Display | Liquid Crystal Display or LCD is used to display character digitally. A 16x2 LCD display can display 16 characters per line and there are 2 such lines. |     x1     |
| DCmotor | Water-pump | It has a set of magnets in a metal cover, and a coil of wire in which current passes in order to generate an electromagnetic field. Due to which the axel of the foter rotates.                     |   x1       |
| LED | Indication | A light emitting diode(LED) is a semiconductor light which emits light when current flows through it.  |    x1      |
| 1kΩ Potentiometer | Water-level detector | A 1KΩ potentiometer hass a 3-I/O pins with 15mm shaft. This is used for adjusting various parameters such as voltage and current in an electronic circuit.                           |     x1     |
| 100Ω Resistor | Resistance | A resistor is a passive two-terminal electrical component that implements electrical resistance in an electronic circuit. An 100Ω resistor can make excellent pull-ups, pull-downs and are a good current limiters.      |     x1     |
| Switch | Water-level sensors (reed switch) | Switch make or breaks the circuit by switch on/off condition, whivh is opening or closing of the electrical line or circuit.  |    x2      |

## Applications

* This system can be used in overhead water tanks in house.
* This system can be used in offices and industries.
* This system can be used in other liquid tanks such as oil, milk..etc, other than water.

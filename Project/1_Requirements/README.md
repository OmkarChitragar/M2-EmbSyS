# Automatic Water Pumping System with Overflow Control

## Table of Contents

* Abstract
* Description
* SWOT analysis
* 5W's and 1H
* Block diagram
* High level requirements
* Low level requirements
* Component details
* Application

## Abstract

* In our daily life we observe lots of wastage of natural resource such as water, one of the major area whare the wastage of water is seen is overhead tanks at our homes.
  Whenever the water in the tank gets empty we switch on the water pump to fillup the tank. Once the water in the tank fills up, it starts to overflow without any indication to
  us. Also we need to manually switch on/off the water pump in a timely manner. So in order to prevent the overflow of the tank and make the whole process of pumping up the
  water automated an Automatic Water Pumping System with Overflow and Water Level Indicator can be great solution.
  
## Description

* This automated system has two water level sensor which is to be attached at top x1 and bottom x1 surface of the water tank which detects the water level in the tank and switches
  on/off the water pump and also displays the water level.

## Identifyng features

* It must detect the water-level and display the water-level.
* It must detect the low water-level and start the water-pump imediatly with an indication.
* It must detect the high water-level and stop the water-pump imediatly with an indication.

## SWOT analysis
![Screenshot (225)](https://user-images.githubusercontent.com/42509490/155770217-7c11c6d5-c1c7-49fe-ad25-791606eb5779.png)

# 5W's and 1H

## Who
* This system can be used by anyone who wants to save water as well as their money.

## What
* This system is an automatic water-pumping and water-level indicator system which save alot of manual efforts.

## Why
* To prevent water tank from overflowing and reduce manual effoerts.

## When
* When the water level is low the water gets filled in the tank through water-pump and when the water gets filled fully in the tank the water-pump offs.

## Where
* This system can be used at any place where the water storage tank is present.

## How
* The system controled by atmega328 microcontroller and water level sensor which gives inputs to microcontroller, based on which the water-pump is controlled to fill the water
  tank.

## Block Diagram
![Block diagram EmbSys](https://user-images.githubusercontent.com/42509490/155845959-13126037-c111-478b-9bb4-7fe362dcf9b7.png)

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
| Switch | Water-level sensors | Switch make or breaks the circuit by switch on/off condition, whivh is opening or closing of the electrical line or circuit.  |    x2      |


## Applications

* This system can be used in overhead water tanks in house.
* This system can be used in offices and industries.
* This system can be used in other liquid tanks such as oil, milk..etc, other than water. 

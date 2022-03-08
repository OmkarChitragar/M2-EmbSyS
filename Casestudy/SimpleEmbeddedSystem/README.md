# Case Study 1: Sunlight Tracking Solar Panel

## Table of Contents

1.Introduction
2.Description
3.Block diagram
4.Component details
5 Application
6.Requirements

## Introduction

In recent years usage of non-renuable energy resources is decreasing with the increase in usage of the renuable energy resouces, such as solar panel for producing electricity
and storing the generated energy into the batteries. This stored energy is used for house hold activities. There is a need of uninturepted continuous production of electrical
energy in order to save the charging time and for the effecient usage of solar energy. For that the solar panels should absorb energy to the maximum extent. This can be done
if the solar panels are continuously placed towards the direction of the sun rays. In order the overcome this challenge a sunlight tracking system is built and can be attached
to the solar panel.

## Description

The sunlight tracking solar panel system consists of a solar panel, two light dependent resistors(LDR) which is arranged on the right and left edge of the solar panel each and
two light dependent resistors(LDR) which is arramged on the top and bottom edge of the solar panel each, a servo motor attached to the panel rotates the panel in the direction
of sun rays and a ATmega328 microcontroller for the proccessing function. When the intensity of the sunlight falling on right LDR is more, panel slowly moves towards right and
if intensity of the sunlight on the left LDR is more, panel slowly moves towards left and similarly top and bottom. In this way the pannel rotates in all the four direction to
capture a good amount of sunlight. In the noon time the sun is ahead and intensity of light on both the LDRs is same, in such cases the panel is constant and there is no
rotation.

## Block Diagram

![Screenshot (223)](https://user-images.githubusercontent.com/42509490/154859576-4ad74e80-039b-4972-b607-7d4af07cdea3.png)

## Component Detailes

*   ATmega328 Microcontroller
*   Light dependent resistor (LDR) x 4
*   10KΩ resistor x 5
*   Servo motor x 2
*   16MHz Crystal
*   22pF Ceramic Capacitors x 2

1.  ATmega328 Microcontroller

*   ATmega328 is an AVR family micro controller which is based on advanced RISC architecture. It is an 8-bit controller. It has 32K bytes of programmable flash memory, 1K byte
    of EEPROM and 2K bytes of SRAM. It has 23 programmable I/O pins. It supports peripheral features like two 8-bit timers, one 16-bit timer, 6 channel ADC with 10-bit
    resolution, programmable USART, 2 wire serial interface (I2C), etc.
  
2.  LDR

*   Light dependent resistors(LDR) are the resistors, whose resistance values depends upon the intensity of the light. As the intensity of light falling on the LDR increases,
    resistance value decreases. In dark, LDR will have maximum resistance. LDR will output an analog value which should be converted to digital. This can be done using analog
    to digital converter.

3.  Servo Motor

*   A servomotor is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.

4.  16MHz Crystal Oscillator

*   A crystal oscillator is an electronic oscillator circuit that uses the mechanical resonance of a vibrating crystal of piezoelectric material to create an electrical signal
    with a constant frequency.

5.  22pF Ceramic Capacitors

*   This specific capacitor is normally used with crystals for loading purposes. These are rated at 22pF and 200V and have a 0.100″ (2.54mm) spacing, meaning these work great
    with a solderless breadboard or protoboard.
  
## Application

*   It can be used for houshold solar panels, which are employed for producing energy for household porpuses.
*   It can be used anywhere, where the solar panels are employed.

## Requirements

## High Level Requirements

| ID | Description  |
|----|-------------------------------------------------|
|HP01| Solar panel must move according to the sunlight |

## Low Level Requirements

| ID | Description  |
|----|-----------------------------------------------------------------|
|LP01| LDR captures the sunlight intensity and sends the feedback to microcontroller |
|LP02| Microcontroller recieves the feedback and proccess the data and gives inputs to servo |
|LP03| Servo takes the microcontroller inputs and rotates accordingly |

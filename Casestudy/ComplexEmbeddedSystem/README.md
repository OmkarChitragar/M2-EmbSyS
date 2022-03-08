# Case Study 2: 2-Wheeled Self Balancing Robot

## Table of Contents

1. Introduction
2. Description
3. Block diagram
4. Component details
5. Application
6. Requirements

## Introduction

The 2-wheeled self balancing robot balances itself on two wheels and can carry a payload from one location to another
Location.

## Description

The 2-wheeled selfbalancing robot is built using Arduino UNO, 6-DOF MPU6050 sensor, 100RPM DC motor, L298D motor driver. The body structure or chasses of the robot is built in
such a way that can carry a small payload of around 250 gms to a distance of around 500 mm from the source. The robot works for a minimum of 30 mins everyday.

## Block Diagram

![Screenshot (224)](https://user-images.githubusercontent.com/42509490/154862731-120869ba-c725-497d-96a6-98617d5b3155.png)

## Component Detailes

* Arduino UNO:  The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and
  developed by Arduino.cc. The board is equipped
  with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards (shields) and other
  circuits.

* Lead acid battery:  It generates electricity through a double sulfate chemical reaction of lead and lead  dioxide, the active
  materials on the battery's plates, react with sulfuric acid in the electrolyte to form lead  sulfate.

* Accelerometer and Gyroscope:  The basic underlying working principle of an accelerometer is such as a dumped  mass on a spring
  When acceleration is experienced by this device, the mass gets displaced till the spring can easily  move the mass, with the
  same rate equal to the acceleration it sensed. Then this displacement value is used to give the acceleration. Gyroscope works
  on the principle of conservation of angular momentum. It works by preserving the
  angular  momentum.

* L293D: works on H-bridge principle(An H-bridge is an electronic circuit that switches the polarity of a  voltage applied to a
  load).

* 100 rpm dc motor: whenever a current carrying conductor is placed in a magnetic field, it experiences a  mechanical force". The
  direction of this force is given by Fleming's left-hand rule and its magnitude is given  by F = BIL.

## Application

* It can carry payload from one place to another place.
* It can be used as a mode of transportation which consumes less workspace.

## Requirements

## High Level Requirements

| ID | Description  |
|----|-------------------------------------------------|
|HP01| Robot must balance itself initially |
|HP02| Robot must follow the user's instructions |
|HP03| Robot must balance itself and carry a payload |

## Low Level Requirements

| ID | Description  |
|----|-----------------------------------------------------------------|
|LP01| User starts the robot using start button |
|LP02| User places payload on top of the robot |
|LP03| User moves the robot using foward, reverse, left and right button |
|LP04| User stops the robot using stop button |

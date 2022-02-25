# Automatic Water Pumping System with Overflow Control

## Table of Contents

* Abstract
* Description
* SWOT analysis
* 4W's and 1H
* Block diagram
* Requirements
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

# 4W's and 1H

## Who
* This system can be used by anyone who wants to save water as well as their money.

## What
* This system is an automatic water-pumping and water-level indicator system which save alot of manual efforts.

## When
* When the water level is low the water gets filled in the tank through water-pump and when the water gets filled fully in the tank the water-pump offs.

## Where
* This system can be used at any place where the water storage tank is present.

## How
* The system controled by atmega328 microcontroller and water level sensor which gives inputs to microcontroller, based on which the water-pump is controlled to fill the water
  tank.
  
# Requirements

## High Level Requirements

| ID | Description  |
|----|-----------------------------------------------------------------|
|HP01| Display the water-level present in the tank |
|HP02| Switch on the water-pump when water-level is low in the tank |
|HP03| Switch off the water-pump when water is fully filled in the tank |

## Low Level Requirements

| ID | Description  |
|----|-----------------------------------------------------------------|
|LP01| Display the water-level in terms of liters |
|LP02| Display the water-level based on sensor's input |
|LP03| Switch on the water-pump when both the water-level sensors are open |
|LP04| Switch on the water-pump when bottom sensor is closed and top sensors is open |
|LP05| Switch off the water-pump when both the water-level sensors are closed |
|LP06| Switch off the water-pump when bottom sensor is open and top sensor is closed |

## Component Detailes


## Applications

* This system can be used in overhead water tanks in house.
* This system can be used in offices and industries.
* This system can be used in other liquid tanks such as oil, milk..etc, other than water. 

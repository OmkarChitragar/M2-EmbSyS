# Automatic Water-Pumping System with Overflow Control

| Codacy badge | Codiga badge | Codiga badge |
|--------------|--------------|--------------|
|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/6d1e75acee114e148b4121ba755ea17b)](https://www.codacy.com/gh/OmkarChitragar/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=OmkarChitragar/M2-EmbSys&amp;utm_campaign=Badge_Grade)|      |       |

* All the project containts are present inside the project folder.
![Screenshot (239)](https://user-images.githubusercontent.com/42509490/155874997-4b79db24-c957-4cbf-b124-32bafc852b7b.png)

## Description

* This automated system has two water level sensor which is to be attached at top x1 and bottom x1 surface of the water tank which detects the water level in the tank and
    switches on/off the water pump and also displays the water level. The water level sensor in this prototype project is replaced with two on/off switches.
* To read the water level of the overhead water tank there are two reed sensors, one for low level (L) and the other for high level (H). A magnetic float switch that activates
   two reed sensors so that the magnetic float travels from low level (L) to high level (H) and vice-versa according to water level in the water tank. If the L reed sensor
   triggers its microcontroller input, the water pump is activated with indicator LED on. When H level is reached, ie the H reed sensor triggers its microcontroller
   input, water pump is deactivated with indicator LED off. Water pump is reactivated only when water drops back to L level.

![Screenshot (256)](https://user-images.githubusercontent.com/42509490/156889253-3e715b80-4885-4445-9ca1-6a24c87a6dd9.png)

## Circuit diagram

![Screenshot (257)](https://user-images.githubusercontent.com/42509490/156889644-ce5ef7af-b2dc-4750-b4e2-5ca24bc623a4.png)

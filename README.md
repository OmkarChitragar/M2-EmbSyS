# Automatic Water-Pumping System with Overflow Control

| Codacy badge | Codiga badge | Codiga badge |
|--------------|--------------|--------------|
|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/485cce76907849b3833d1b3c605205a3)](https://www.codacy.com/gh/OmkarChitragar/M2-EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=OmkarChitragar/M2-EmbSys&amp;utm_campaign=Badge_Grade)| <a href="https://api.codiga.io/project/31477/score/svg">   <img src="https://api.codiga.io/project/31477/score/svg?style=dark" alt="codiga badge" /></a> |  <a href="https://api.codiga.io/project/31477/status/svg">   <img src="https://api.codiga.io/project/31477/status/svg" alt="codiga badge" /></a> |

*   NOTE: All the project contents are present inside the project folder including presentation video.

![ezgif com-gif-maker](https://user-images.githubusercontent.com/42509490/157232172-98166cd2-bdff-49dc-82a8-0dc48085560c.gif)

![Screenshot (239)](https://user-images.githubusercontent.com/42509490/155874997-4b79db24-c957-4cbf-b124-32bafc852b7b.png)

## Description

*   This automated system has two water level sensor which is to be attached at top x1 and bottom x1 surface of the water tank which detects the water level in the tank and
    switches on/off the water pump and also displays the water level. The water level sensor in this prototype project is replaced with two on/off switches. To read the water
    level of the overhead water tank there are two reed sensors, one for low level (L) and the other for high level (H). A magnetic float switch that activates
    two reed sensors so that the magnetic float travels from low level (L) to high level (H) and vice-versa according to water level in the water tank. If the L reed sensor
    triggers its microcontroller input, the water pump is activated with indicator LED on. When H level is reached, ie the H reed sensor triggers its microcontroller
    input, water pump is deactivated with indicator LED off. Water pump is reactivated only when water drops back to L level.

![Screenshot (256)](https://user-images.githubusercontent.com/42509490/156889253-3e715b80-4885-4445-9ca1-6a24c87a6dd9.png)

## Circuit Diagram and Simulation

![Screenshot (270)](https://user-images.githubusercontent.com/42509490/156945816-b9fd09e7-f1f6-4c83-9bc0-3b56b717efa4.png)

*	  The circuit is designed in Simul-IDE software.
*	  The simulation is carried out using .hex file.
*	  The code for simulation is designed in VS-studio code using Platform.io extension.

![Screenshot (273)](https://user-images.githubusercontent.com/42509490/157050478-b95b929b-d6b0-4ea1-bffa-6a048746a18b.png)

* 	The .hex file was generated after successfully building and running of the code.
*	  The generated .hex file is then loaded in the Atmega328 microcontroller and the simulation was carried out successfully.  

## Learnings

*	  Learnt to design circuits effectively in simul-IDE software.
*  	Learnt to code embedded-c in platform.io in visual studio code.
*	  Conducted researches on case study.

## Challenges

*  	Due to limitations of sensors in simul-IDE software it was bit difficult to design the circuit and build code. 
* 	The challenge was overcome by replacing the water-level sensor with on/off switch and water-level indicator sensor with potentiometer.
  

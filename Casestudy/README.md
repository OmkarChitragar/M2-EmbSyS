# Case Study 1: Sunlight Tracking Solar Panel

## Table of Contents

* Introduction
* Description
* Block diagram
* Component details
* Application
* Requirements
* High level requirement
* Low level requirement

## Introduction

In recent years usage of non-renuable energy resources is decreasing with the increase in usage of the renuable energy resouces, such as solar panel for producing electricity and
storing the generated energy into the batteries. This stored energy is used for house hold activities. There is a need of uninturepted continuous production of electrical energy
in order to save the charging time and for the effecient usage of solar energy. For that the solar panels should absorb energy to the maximum extent. This can be done if the solar
panels are continuously placed towards the direction of the sun rays. In order the overcome this challenge a sunlight tracking system is built and can be attached to the solar
panel.

## Description

The sunlight tracking solar panel system consists of a solar panel, two light dependent resistors(LDR) which is arranged on the right and left edge of the solar panel each and two
light dependent resistors(LDR) which is arramged on the top and bottom edge of the solar panel each, a servo motor attached to the panel rotates the panel in the direction of sun
rays and a ATmega328 microcontroller for the proccessing function. When the intensity of the sunlight falling on right LDR is more, panel slowly moves towards right and if
intensity of the sunlight on the left LDR is more, panel slowly moves towards left and similarly top and bottom. In this way the pannel rotates in all the four direction to
capture a good amount of sunlight. In the noon time the sun is ahead and intensity of light on both the LDRs is same, in such cases the panel is constant and there is no rotation.

## Block Diagram

![Screenshot (223)](https://user-images.githubusercontent.com/42509490/154859576-4ad74e80-039b-4972-b607-7d4af07cdea3.png)

# Testplan And Output

## High Level Testplan

| Test-ID | Description  | Input | Expexted Output | Actual Output | Status |
|----|--------------------|----------|----------------|-------------|--------|
|HLTP1| Display the water-level present in the tank|Potentiometer value|Water-level will be displayed accordingly|Water-level displayed accordingly|Pass|
|HLTP2| Switch on the water-pump when water-level is low in the tank|Top and bottom switchs(as water-level sensor)|DcMotor(as water-pump) must switch on|DcMotor(as water-pump) switches on|Pass|
|HLTP3| Switch off the water-pump when water is fully filled in the tank|Top and bottom switchs(as water-level sensor)|DcMotor(as water-pump) must switch off|DcMotor(as water-pump) switches off|Pass|

## Low Level Testplan

| Test-ID | Description  | Input | Expexted Output | Actual Output | Status | HLTP-ID|
|----|------------------|---------|------------------|-------------|-------|---------|
|LLTP1| Display the water-level in terms of liters| Potentiometer(as water-leveldetector) value| must display in terms of liters| Displayed in terms of liters| Pass|HLTP1|
|LLTP2| Display the water-level based on sensor's input|Potentiometer value ranging:____________________________ 1) >=000 to <=200 ; 2) >=200 to <=400 ; 3) >=400 to <=600 ; 4) >=600 to <=800 ; 5) >=800 to <=1000 ; | Output according to potentiometer value input_____________________ 1) =200Ltrs. 2) =400Ltrs. 3) =600Ltrs. 4) =800Ltrs. 5) =1000Ltrs.|Output according to potentiometer value input_____________________ 1) =200Ltrs. 2) =400Ltrs. 3) =600Ltrs. 4) =800Ltrs. 5) =1000Ltrs.| Pass | HLTP1 |                                      
|LLTP3| Switch on the water-pump when both the water-level sensors are open| Top and Bottom switches(as water-level sensor) are open| DcMotor(as water-pump) must on |DcMotor(as water-pump) on | Pass |HLTP2|
|LLTP4| Switch on the water-pump when bottom sensor is closed and top sensors is open| Top switch open and Bottom switch closed |DcMotor(as water-pump) must on| DcMotor(as water-pump) on| Pass |HLR2|
|LLTP5| Switch off the water-pump when both the water-level sensors are closed|Top switch and Bottom switch(as water-level sensor) are closed|DcMotor(as water-pump) must off|DcMotor(as water-pump) off| Pass |HLR3|

## Displaying the water-level present in the tank interms of liters based on potentiometer input

![Screenshot (260)](https://user-images.githubusercontent.com/42509490/156940142-4311cf53-ac34-46e8-90e5-e8f98572b3e1.png)

## Switches on the water-pump when both the water-level sensors are open

![Screenshot (265)](https://user-images.githubusercontent.com/42509490/156939971-4db63506-5411-478d-bb88-d34ab07b1cf9.png)

## Switches on the water-pump when bottom sensor is closed and top sensors is open

![Screenshot (266)](https://user-images.githubusercontent.com/42509490/156940006-7e43caf1-6ed2-477c-842f-60c28ae68d95.png)

## Switches off the water-pump when both the water-level sensors are closed

![Screenshot (268)](https://user-images.githubusercontent.com/42509490/156940026-44b248db-9d3b-46c4-9b53-62685a50a1f6.png)

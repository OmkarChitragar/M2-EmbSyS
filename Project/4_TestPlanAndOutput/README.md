## High Level Testplan

| Test-ID | Description  | Input | Expexted Output | Actual Output | Status |
|----|-----------------------------------------------------------------|
|HLR1| Display the water-level present in the tank |
|HLR2| Switch on the water-pump when water-level is low in the tank |
|HLR3| Switch off the water-pump when water is fully filled in the tank |

## Low Level Testplan

| Test-ID | Description  | HLR-ID
|----|----------------------------------------------------------|-------|
|LLR1| Display the water-level in terms of liters |HLR1|
|LLR2| Display the water-level based on sensor's input |HLR1|
|LLR3| Switch on the water-pump when both the water-level sensors are open |HLR2|
|LLR4| Switch on the water-pump when bottom sensor is closed and top sensors is open |HLR2|
|LLR5| Switch off the water-pump when both the water-level sensors are closed |HLR3|

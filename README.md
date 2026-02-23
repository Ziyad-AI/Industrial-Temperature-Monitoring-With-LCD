# Industrial Temperature Monitoring System With LCD

## Project Overview
This project is an Arduino-based industrial temperature monitoring system with a 16x2 LCD display and alarm mechanism.

## Problem Statement
Overheating in industrial environments can damage equipment and cause operational downtime.

## System Features
- Real-time temperature display on LCD
- Alarm activation when threshold exceeds
- Simple Human-Machine Interface (HMI) concept

## Hardware Components
- Arduino UNO
- LM35 Temperature Sensor
- 16x2 LCD Display
- Buzzer

## Working Logic
1. Read temperature sensor
2. Convert analog value
3. Display temperature on LCD
4. Activate alarm if threshold exceeds

## Future Scope
- IoT remote monitoring
- Cloud data logging
- SMS alert system


## Hardware Connections

### LM35 Temperature Sensor
| LM35 Pin | Arduino Connection |
|----------|--------------------|
| VCC      | 5V                 |
| OUT      | A0                 |
| GND      | GND                |


### 16x2 LCD Display (4-bit Mode)
| LCD Pin | Arduino Connection |
|----------|--------------------|
| RS       | 12                 |
| E        | 11                 |
| D4       | 5                  |
| D5       | 4                  |
| D6       | 3                  |
| D7       | 2                  |
| VSS      | GND                |
| VDD      | 5V                 |
| VO       | Potentiometer (for contrast) |


### Buzzer
| Buzzer Pin | Arduino Connection |
|------------|--------------------|
| Positive   | Digital Pin 8      |
| Negative   | GND                |


## Safety Note
This project is a prototype for demonstration purposes. 
For real industrial systems, proper isolation, industrial-grade sensors, and certified protection devices must be used.

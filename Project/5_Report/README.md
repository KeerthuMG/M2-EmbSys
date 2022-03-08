# HOME AUTOMATION SYSTEM 

## Table of content 

## 1. About Home Automation System

### 1.1 Abstract

Home automation is the ability to do tasks automatically and monitor remotely. Tasks include like tuning off lights when nobody is present in the room, locking door, door opening automatically, monitoring temperature and etc. So, like this many tasks are done by home automation system. The main thing is that it gives a proper security. It saves time. It helps in avoiding wastage of electricity.

### 1.2 Features

1.	It shall switche ON the light when someone is present in that particular place and switch OFF the light when no one is there in that place by using sensors.
2.	It shall switche ON the fan when someone is present in that particular place and switch OFF the fan when no one is there in that place by using sensors.
3. It shall indicate a signal when the temperature is not in normal level.

### 1.3 5W's & 1H


![](https://github.com/KeerthuMG/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/5W%261H.jpg)


### 1.4 Swot Analysis


![](https://github.com/KeerthuMG/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/SWOT.jpg)


## 2. Requirements

2.1 High Level Requirement

| ID | Description |
|----|------------|
|HLR1 | User will be experiencing automatic turn on and off of lights |
|HLR2 | User will be experiencing automatic turn on and off of fan |
|HLR3 | User will be able to experience the indication of increase or decrease in temperature |
|HLR4 | User will be able to experience indication signal |
|HLR5 | User will be able to monitor everything using a display |

2.2 Low Level Requirement

| HLR | LLR | Description |
|-----|-----|-------------|
|HLR1 | LLR1 | Usage of IR Sensor |
|HLR2 | LLR2 | By monitoring the temperature the fan will be switched on automatically |
|HLR3 | LLR3 | By the increase and decrease of temperature the LED will glow |
|HLR4 | LLR4 | LED will glow when there is decrease in temperature and when the light is on |
|HLR5 | LLR5 | LED display will display the light status and temperature status |

## 3. Block Diagram and Components Explanation

3.1 Block Diagram

![](https://github.com/KeerthuMG/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/CD.jpg)

3.2 Components Description

## 4. Architecture

4.1 Behaviour Diagram

![](https://github.com/KeerthuMG/M2-EmbSys/blob/main/Project/2_Architecture/Behavior%20Diagram.jpg)

4.2 Structural Diagram

![](https://github.com/KeerthuMG/M2-EmbSys/blob/main/Project/2_Architecture/Structural%20Diagram.jpg)

## 5. Test Plan and Output

5.1 Hight Level Test Plan

| Test ID | Description | Expected Output | Actual Output | Pass/Fail |
|---------|-------------|-----------------|---------------|-----------|
| HLTP1 | Light | 100% LED | 100% LED | ✅ |
| HLTP2 | Fan | Should be on when temperature is high | Should be on when temperature is high | ✅ |
| HLTP3 | LED | Should indicate when temperature is low | Should indicate when temperature is low | ✅ |
| HLTP4 | Temperature | When it is high fan will run and when it is low warning LED will glow |  When it is high fan will run and when it is low warning LED will glow | ✅ |

5.2 Low Level Test Plan

| HLTP | LLTP | Description | Input | Expected Output | Actual Output | Pass/Fail |
|------|------|-------------|-------|-----------------|---------------|-----------|
| HLTP1 | LLTP1 | Light | 200Lux(User) 0Lux(LDR) | LED should glow | LED should glow | ✅  |
| HLTP2 | LLTP2 | Fan | When temperature is between 35°C - 50°C | Fan should be on | Fan should be on |  ✅ |
| HLTP3 | LLTP3 | LED | When temperature is between 1°C - 10°C | LED should glow for indication |  LED should glow for indication | ✅ |
| HLTP4 | LLTP4 | Temperature | 1°C - 10°C | LED should glow for indication | LED should glow for indication | ✅ |
| HLTP4 | LLTP4 | Temperature | 35°C - 50°C | Fan should be on | Fan should be on | ✅ |

## 6. Output

## 7. Applications

## 8. Conclusion







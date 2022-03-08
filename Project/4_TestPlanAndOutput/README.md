# Test Plan and Output

## High Level Test Plan

| Test ID | Description | Expected Output | Actual Output | Pass/Fail |
|---------|-------------|-----------------|---------------|-----------|
| HLTP1 | Lamp | 100% LED | 100% LED | ✅ |
| HLTP2 | Fan | Should be on when temperature is high | Should be on when temperature is high | ✅ |
| HLTP3 | LED | Should indicate when temperature is low | Should indicate when temperature is low | ✅ |
| HLTP4 | Temperature | When it is high fan will run and when it is low warning LED will glow |  When it is high fan will run and when it is low warning LED will glow | ✅ |


## Low Level Test Plan

| HLTP | LLTP | Description | Input | Expected Output | Actual Output | Pass/Fail |
|------|------|-------------|-------|-----------------|---------------|-----------|
| HLTP1 | LLTP1 | Lamp | 200Lux(User) 0Lux(LDR) | LED should glow | LED should glow | ✅  |
| HLTP2 | LLTP2 | Fan | When temperature is between 35°C - 50°C | Fan should be on | Fan should be on |  ✅ |
| HLTP3 | LLTP3 | LED | When temperature is between 1°C - 10°C | LED should glow for indication |  LED should glow for indication | ✅ |
| HLTP4 | LLTP4 | Temperature | 1°C - 10°C | LED should glow for indication | LED should glow for indication | ✅ |
| HLTP4 | LLTP4 | Temperature | 35°C - 50°C | Fan should be on | Fan should be on | ✅ |

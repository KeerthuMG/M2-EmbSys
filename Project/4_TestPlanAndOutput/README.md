# Test Plan and Output

## High Level Test Plan

| Test ID | Description | Expected Output | Actual Output | Pass/Fail |
|---------|-------------|-----------------|---------------|-----------|
| HLTP1 | Light | 100% LED | 100% LED | ✅ |
| HLTP2 | Fan | Should be on when temperature is high | Should be on when temperature is high | ✅ |
| HLTP3 | LED | Should indicate when temperature is low | Should indicate when temperature is low | ✅ |
| HLTP4 | Temperature | When it is high fan will run and when it is low warning LED will glow |  When it is high fan will run and when it is low warning LED will glow | ✅ |


## Low Level Test Plan

| HLTP | LLTP | Description | Input | Expected Output | Actual Output | Pass/Fail |
|------|------|-------------|-------|-----------------|---------------|-----------|

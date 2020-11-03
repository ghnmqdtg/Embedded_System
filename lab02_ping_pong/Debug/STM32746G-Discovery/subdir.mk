################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.c 

OBJS += \
./STM32746G-Discovery/stm32746g_discovery.o \
./STM32746G-Discovery/stm32746g_discovery_audio.o \
./STM32746G-Discovery/stm32746g_discovery_camera.o \
./STM32746G-Discovery/stm32746g_discovery_eeprom.o \
./STM32746G-Discovery/stm32746g_discovery_lcd.o \
./STM32746G-Discovery/stm32746g_discovery_qspi.o \
./STM32746G-Discovery/stm32746g_discovery_sd.o \
./STM32746G-Discovery/stm32746g_discovery_sdram.o \
./STM32746G-Discovery/stm32746g_discovery_ts.o 

C_DEPS += \
./STM32746G-Discovery/stm32746g_discovery.d \
./STM32746G-Discovery/stm32746g_discovery_audio.d \
./STM32746G-Discovery/stm32746g_discovery_camera.d \
./STM32746G-Discovery/stm32746g_discovery_eeprom.d \
./STM32746G-Discovery/stm32746g_discovery_lcd.d \
./STM32746G-Discovery/stm32746g_discovery_qspi.d \
./STM32746G-Discovery/stm32746g_discovery_sd.d \
./STM32746G-Discovery/stm32746g_discovery_sdram.d \
./STM32746G-Discovery/stm32746g_discovery_ts.d 


# Each subdirectory must supply rules for building sources it contributes
STM32746G-Discovery/stm32746g_discovery.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_audio.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_audio.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_audio.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_camera.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_camera.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_camera.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_eeprom.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_eeprom.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_eeprom.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_lcd.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_lcd.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_lcd.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_qspi.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_qspi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_qspi.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_sd.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sd.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_sd.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_sdram.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_sdram.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_sdram.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
STM32746G-Discovery/stm32746g_discovery_ts.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery_ts.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32746G-Discovery/stm32746g_discovery_ts.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"


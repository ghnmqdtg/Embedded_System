################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336/ft5336.c 

OBJS += \
./ft5336/ft5336.o 

C_DEPS += \
./ft5336/ft5336.d 


# Each subdirectory must supply rules for building sources it contributes
ft5336/ft5336.o: C:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336/ft5336.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -IC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 -I"D:/GitHub/Embedded_System/lab04_handwriting_recognition/Utilities/Fonts" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"ft5336/ft5336.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"


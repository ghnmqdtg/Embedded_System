################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ft5336/subdir.mk
-include STM32746G-Discovery/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := lab02_ping_pong
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
lab02_ping_pong.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
lab02_ping_pong.list \

OBJCOPY_BIN += \
lab02_ping_pong.bin \


# All Target
all: main-build

# Main-build Target
main-build: lab02_ping_pong.elf secondary-outputs

# Tool invocations
lab02_ping_pong.elf: $(OBJS) $(USER_OBJS) D:\GitHub\Embedded_System\lab02_ping_pong\STM32F746NGHX_FLASH.ld
	arm-none-eabi-gcc -o "lab02_ping_pong.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"D:\GitHub\Embedded_System\lab02_ping_pong\STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="lab02_ping_pong.map" -Wl,--gc-sections -static -LC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/STM32746G-Discovery -LC:/Users/ghnmq/STM32Cube/Repository/STM32Cube_FW_F7_V1.16.0/Drivers/BSP/Components/ft5336 --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

lab02_ping_pong.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "lab02_ping_pong.list"
	@echo 'Finished building: $@'
	@echo ' '

lab02_ping_pong.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "lab02_ping_pong.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets

################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_flash.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_smc.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_flash.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_smc.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_flash.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_smc.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCR_INTEGER_PRINTF -DgUseOTAPBootloader_d=1 -DFRDM_KW41Z -DFREEDOM -DSDK_DEBUGCONSOLE=0 -DSDK_DEBUGCONSOLE_UART -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -DCPU_MKW41Z512VHT4 -DCPU_MKW41Z512VHT4_cm0plus -D__REDLIB__ -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\framework\common" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\drivers" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\CMSIS" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\utilities" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\config" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\drivers\eeprom" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\drivers\flash" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\drivers\spi" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\drivers\timer" -I"C:\NXP_Tiger\Tiger-KW41Z-bootloader\source\drivers\uart" -O0 -fno-common -g -Wall -c  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


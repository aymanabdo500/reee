################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../REEP/MCAL/DIO/DIO.c 

OBJS += \
./REEP/MCAL/DIO/DIO.o 

C_DEPS += \
./REEP/MCAL/DIO/DIO.d 


# Each subdirectory must supply rules for building sources it contributes
REEP/MCAL/DIO/%.o: ../REEP/MCAL/DIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



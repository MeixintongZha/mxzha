################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ansi\ hello\ world.c 

OBJS += \
./src/ansi\ hello\ world.o 

C_DEPS += \
./src/ansi\ hello\ world.d 


# Each subdirectory must supply rules for building sources it contributes
src/ansi\ hello\ world.o: ../src/ansi\ hello\ world.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ansi hello world.d" -MT"src/ansi\ hello\ world.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



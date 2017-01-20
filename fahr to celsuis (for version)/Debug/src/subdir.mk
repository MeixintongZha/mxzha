################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/for\ version.c 

OBJS += \
./src/for\ version.o 

C_DEPS += \
./src/for\ version.d 


# Each subdirectory must supply rules for building sources it contributes
src/for\ version.o: ../src/for\ version.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/for version.d" -MT"src/for\ version.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/float\ version.c 

OBJS += \
./src/float\ version.o 

C_DEPS += \
./src/float\ version.d 


# Each subdirectory must supply rules for building sources it contributes
src/float\ version.o: ../src/float\ version.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/float version.d" -MT"src/float\ version.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/my-hello\ world.c 

OBJS += \
./src/my-hello\ world.o 

C_DEPS += \
./src/my-hello\ world.d 


# Each subdirectory must supply rules for building sources it contributes
src/my-hello\ world.o: ../src/my-hello\ world.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/my-hello world.d" -MT"src/my-hello\ world.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



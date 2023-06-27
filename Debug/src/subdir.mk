################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArrayLibrary.cpp \
../src/GraphsLibrary.cpp \
../src/HashTableLibrary.cpp \
../src/LinkedListLibrary.cpp \
../src/QueueLibrary.cpp \
../src/StackLibrary.cpp \
../src/StringsLibrary.cpp \
../src/TestProject.cpp \
../src/TreeLibrary.cpp 

C_SRCS += \
../src/SortingAlgorithms.c 

CPP_DEPS += \
./src/ArrayLibrary.d \
./src/GraphsLibrary.d \
./src/HashTableLibrary.d \
./src/LinkedListLibrary.d \
./src/QueueLibrary.d \
./src/StackLibrary.d \
./src/StringsLibrary.d \
./src/TestProject.d \
./src/TreeLibrary.d 

C_DEPS += \
./src/SortingAlgorithms.d 

OBJS += \
./src/ArrayLibrary.o \
./src/GraphsLibrary.o \
./src/HashTableLibrary.o \
./src/LinkedListLibrary.o \
./src/QueueLibrary.o \
./src/SortingAlgorithms.o \
./src/StackLibrary.o \
./src/StringsLibrary.o \
./src/TestProject.o \
./src/TreeLibrary.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ArrayLibrary.d ./src/ArrayLibrary.o ./src/GraphsLibrary.d ./src/GraphsLibrary.o ./src/HashTableLibrary.d ./src/HashTableLibrary.o ./src/LinkedListLibrary.d ./src/LinkedListLibrary.o ./src/QueueLibrary.d ./src/QueueLibrary.o ./src/SortingAlgorithms.d ./src/SortingAlgorithms.o ./src/StackLibrary.d ./src/StackLibrary.o ./src/StringsLibrary.d ./src/StringsLibrary.o ./src/TestProject.d ./src/TestProject.o ./src/TreeLibrary.d ./src/TreeLibrary.o

.PHONY: clean-src


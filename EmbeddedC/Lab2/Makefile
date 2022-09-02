#Write Make File to Automate Compilation Process

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
AsOBJ=$(AS:.s=.o)
all:Arm_Cortex_M3_GPIO.hex
compile:main.o

%.o:%.s
	$(CC)as.exe $(CFLAGS) $< -o $@
%.o:%.c
	$(CC)gcc.exe $(CFLAGS) -c $< -o $@

# main.o:main.c
# 	$(CC)gcc.exe -c $(CFLAGS) $< -o $@
# 	@echo "-----Compilling is Done---------"

Arm_Cortex_M3_GPIO.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_File.map


Arm_Cortex_M3_GPIO.hex : Arm_Cortex_M3_GPIO.elf
	$(CC)objcopy.exe -O  binary $< $@
	@echo "------------------Build is Done-----------------------"

cleanall:
	rm -rf *.o *.elf *.hex *~ 
	@echo "Everything is Clean"

Clean:
	rm -rf *.o
	@echo "-----Deleting Objects Files-------"	


TARGET = adc_test
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -std=gnu99 -Wall -g
LDFLAGS = -nostartfiles -T linker_script.ld

SRCS = main.c adc_driver.c start.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET).elf

$(TARGET).elf: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

clean:
	del /q *.o *.elf

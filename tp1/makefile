CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: ConversionTest TablasDeConversion

ConversionTest: ConversionTest.c Conversion.c
	$(CC) $(CFLAGS) -o ConversionTest ConversionTest.c Conversion.c

TablasDeConversion: TablasDeConversion.c Conversion.c
	$(CC) $(CFLAGS) -o TablasDeConversion TablasDeConversion.c Conversion.c

clean:
	rm -f ConversionTest TablasDeConversion



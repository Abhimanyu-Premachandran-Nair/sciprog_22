CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc 

mmc: main.o matxmult.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mmc main.o matxmult.o $(LDFLAGS)     

matxmult.o: matxmult.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) matxmult.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o  

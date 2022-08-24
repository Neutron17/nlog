CC = cc

all: run

build:
	$(CC) test1.c -o test1 -lnlog -O0

run: build
	./test1

clean:
	rm logs.txt test1


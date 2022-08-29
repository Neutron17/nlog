CC = cc

all: run

build:
	$(CC) demo.c -o demo -lnlog -O0
	$(CC) lognone.c -o lognone -lnlog -O0
	$(CC) speed1.c -o speed1 -lnlog -O0

run: build
	./demo
	./lognone
	./speed1

clean:
	rm logs.txt
	rm demo lognone speed1

